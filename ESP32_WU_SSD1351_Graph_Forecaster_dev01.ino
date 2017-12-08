#include <WiFi.h>
#include <ArduinoJson.h>     // https://github.com/bblanchon/ArduinoJson
#include "time.h"
#include <SPI.h>
#include <SSD_13XX.h>
#include "images/sunny.c"
#include "images/mostlysunny.c"
#include "images/cloudy.c"
#include "images/rain.c"
#include "images/drizzle.c"
#include "images/fog.c"
#include "images/sleet.c"
#include "images/snow.c"
#include "images/tstorms.c"

#define _cs   17  // goes to TFT CS
#define _dc   16  // goes to TFT DC
#define _mosi 23  // goes to TFT MOSI
#define _sclk 18  // goes to TFT SCK/CLK
#define _rst  5   // ESP RST to TFT RESET
#define _miso     // Not connected
//       3.3V     // Goes to TFT LED  
//       5v       // Goes to TFT Vcc
//       Gnd      // Goes to TFT Gnd        

// Use hardware SPI
SSD_13XX tft = SSD_13XX(_cs, _dc, _rst);

// WU Icon names, there are 37, but many are the same image, so use the *icon when required, giving 10 basic icons
// *snow            == chanceflurries == chancesnow == flurries == nt_chanceflurries == nt_chancesnow == nt_flurries == nt_snow
// *rain            == chancerain == nt_chancerain == nt_rain
// *sleet           == chancesleet == nt_chancesleet == nt_sleet
// *sunny           == clear
// *cloudy          == nt_cloudy
// *mostlysunny     == partlycloudy == partlysunny == mostlycloudy
// *fog             == nt_fog == nt_hazy == hazy
// *tstorms         == chancetstorms == nt_tstorms == nt_chancetstorms
// *nt_mostlycloudy == nt_mostlysunny == nt_partlycloudy == nt_partlysunny
// *nt_clear

unsigned long        lastConnectionTime = 0;          // Last time you connected to the server, in milliseconds
const unsigned long  postingInterval = 10L*60L*1000L; // Delay between updates, in milliseconds, WU allows 500 requests per-day maximum, this sets it to every 30-mins or 48/day

#define icon_width  60
#define icon_height 50

enum image_names { // enumerated table uused to point to images for drawRGBBitmaap function
  sunny_img,
  mostlysunny_img,
  cloudy_img,
  rain_img,
  drizzle_img,
  snow_img,
  sleet_img,
  fog_img,
  tstorms_img 
};

#define BLACK       0x0000
#define RED         0xF800
#define GREEN       0x07E0
#define BLUE        0x001F
#define CYAN        0x07FF
#define MAGENTA     0xF81F
#define YELLOW      0xFFE0
#define ORANGE      0xFC40
#define WHITE       0xFFFF

String apikey   = "----------------";
String country  = "UK";
String city     = "MELKSHAM";
String time_str, press_hour;
int    last_press_hour;

const char* ssid     = "yourSSID";
const char* password = "yourPASSWORD";
const char* host     = "api.wunderground.com";
 
String currCondString; // string to hold received API weather data

WiFiClient client; // wifi client object

#define pressure    0
#define temperature 1
#define humidity    2

float reading[3][24] = {0}; // Array for readings of (24 columns and 3 rows), Row1=pressure, Row2=temperature, Row3=humidity

void setup() { 
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(2);
  tft.setTextScale(1);
  clear_screen();
  display_progress("Starting...",25);
  StartWiFi(ssid,password);
  config_time();
  display_progress("Decoding weather...",100);
  Call_API(&currCondString);      // Get data with an API call and place response in a String
  Serial.println(currCondString); // Display the response
  clear_screen();
  lastConnectionTime = millis();
}

void loop() {
  UpdateLocalTime();
  if (millis() - lastConnectionTime > postingInterval) {
    Call_API(&currCondString);      // Get data with an API call and place response in a String
    Serial.println(currCondString); // Display the response
    lastConnectionTime = millis();
  }
  Display_WU_Forecast();
  delay(10000);
  Predict_Weather();
  delay(10000);
  Draw_Trends();
  delay(10000);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void Display_WU_Forecast(){
  //Serial.println(currCondString);   // Display the response
  clear_screen();
  if(CurrCondObj(&currCondString)) {
    //clear_screen();
    String icon          = getWeatherIcon(); // From WU Jason return
    String forecast_time = getLocalTime();   // From WU Jason return
    if (icon == "snow" ||
        icon == "chanceflurries" ||
        icon == "chancesnow" || 
        icon == "flurries" || 
        icon == "nt_chanceflurries" ||
        icon == "nt_chancesnow" || 
        icon == "nt_flurries" ||
        icon == "nt_snow")           { drawWximage(0,35,snow_img); }
    if (icon == "rain" || 
        icon == "chancerain" ||
        icon == "nt_chancerain" ||
        icon == "nt_rain")           { drawWximage(0,35,rain_img); }
    if (icon == "sleet" || 
        icon == "chancesleet" ||
        icon == "nt_chancesleet" ||
        icon == "nt_sleet")          { drawWximage(0,35,sleet_img); }
    if (icon == "sunny" ||
        icon == "clear")             { drawWximage(0,35,sunny_img); }
    if (icon == "cloudy" ||
        icon == "nt_cloudy")         { drawWximage(0,35,cloudy_img); }
    if (icon == "mostlysunny" ||
        icon == "partlycloudy" ||
        icon == "partlysunny" ||
        icon == "mostlycloudy")      { drawWximage(0,35,mostlysunny_img); }
    if (icon == "fog" ||
        icon == "nt_fog" ||
        icon == "nt_hazy" ||
        icon == "hazy")              { drawWximage(0,35,fog_img); }
    if (icon == "tstorms" ||
        icon == "chancetstorms" ||
        icon == "nt_tstorms" ||
        icon == "nt_chancetstorms")  { drawWximage(0,35,tstorms_img); }
    if (icon == "nt_mostlycloudy" ||
        icon == "nt_mostlysunny" ||
        icon == "nt_partlycloudy" ||
        icon == "nt_partlysunny")    { drawWximage(0,35,cloudy_img); }
    if (icon == "nt_clear")          { drawWximage(0,35,sunny_img); }
        
    display_text(0, 0 ,"WX: "+forecast_time.substring(0,12)+forecast_time.substring(14,22),YELLOW,1,28);
    if (getCurrWeather() == "Rain") display_text(0,12,getCurrWeather()+" ("+getPrecipTodayMet()+"mm)",YELLOW,1,16); 
    else display_text(0,12,getCurrWeather(),YELLOW,1,16);
    display_text(0,90,getCurrC()+"°C / "+getRelHum(),ORANGE,2,6); // or use getCurrF for fahrenheit etc for the rest of the readings
    display_text(0,110,getWindDir()+" @ "+getWindMPH()+"mph",MAGENTA,1,15);
    display_text(65,55,getPressure_mb()+" hPa ",MAGENTA,1,10);
    display_text(70,65,Pressure_trend(),MAGENTA,1,8);
    if (reading[pressure][23] == 0) { // only occurs first time through
      float pressure_now    = getPressure_mb().toFloat();
      float temperature_now = getCurrC().toFloat();
      float humidity_now    = getRelHum().toFloat();
      for (int i = 0; i <= 23; i++){ //At the start all array values are the same 
        reading[pressure][i]    = pressure_now;
        reading[temperature][i] = temperature_now;
        reading[humidity][i]    = humidity_now;
      } // {0,5,11,17,20,21,22,23} are the display positions
      last_press_hour = time_str.substring(11,13).toInt();
    }
  }  
}

String Pressure_trend() {
  String pTrend = getPressure_trend();
  if (pTrend == "+") return "(Rising)"; else
  if (pTrend == "0") return "(Steady)"; else
  if (pTrend == "-") return "(Falling)";
  else return "";
} 

// The basic weather prediction estimating rules are:
// If air pressure is low the weather is or will be bad.
// If air pressure is high the weather will be good.
// If pressure is falling, then the weather will get worse; if rising better.
// The faster it is falling or rising, the faster and more the weather will change.
// Now pressure rules
//1013.2 to 1022.68 and steady         - slight changes in temperature, for one to two days  
//1013.2 to 1022.68 rising rapidily    - within two days warmer and rain  
//1013.2 to 1022.68 falling rapidily   - rain within 24 hours.  
//1022.68 or above and falling rapidly - warmer, and rain within 36 hours.  
//1022.68 or above and steady          - variable  No early change.  
//1013.2 or below and falling slowly   - rain within 18 hours that will continue a day or two.  
//1013.2 or below and falling rapidly  - rain, with high wind, followed within two days by clearing, colder.  
//1013.2 or below and rising           - clearing and colder within 12 hours.  
//1009.14 or below and falling rapidly - severe gales and heavy rain or snow, followed in winter by a cold front.  
//1009.14 or below and rising rapidly  - clearing and colder.  
//
void Predict_Weather(){
  float  pressure_now   = getPressure_mb().toFloat();
  String trend_str      = "Steady";
  String forecast_text  = "No change";
  float  trend = pressure_now - reading[pressure][22]; // trend of pressure over last 1-hour for local forecast
  clear_screen();
  display_text(30,0,"Local Forecast",YELLOW,1,12);
  if (trend >= 3.5)                        {trend_str = "Rising rapidly"; }
  else if (trend >=  0.1  && trend <= 1.5) {trend_str = "Rising"; }
  else if (trend >   0.1  && trend <= 1.5) {trend_str = "Rising slowly"; }
  else if (trend >  -0.1  && trend < 0.1)  {trend_str = "Steady"; }
  else if (trend >= -1.5  && trend <-0.1)  {trend_str = "Falling slowly"; }
  else if (trend >= -3.5  && trend < -1.5) {trend_str = "Falling"; }
  else if (trend <= -3.5)                  {trend_str = "Falling rapidly"; }
  display_text(0,90,String(pressure_now,1)+" hPa ("+String(trend,1)+")",CYAN,1,10);
  display_text(0,100,trend_str,CYAN,1,10);
  String wx_image = "cloudy_img"; // Generally when there is 'no change' then cloudy is the conditions
  if (pressure_now >= 1022.7)                                                              {forecast_text = "Good clear weather"; drawWximage(0,35,sunny_img);}
  if (pressure_now >= 1022.7  &&
     (trend_str  == "Falling rapidly" || trend_str == "Falling"))                          {forecast_text = "Warmer, rain within 36-hrs"; drawWximage(0,35,rain_img);}
  if (pressure_now >= 1013.2  && pressure_now <= 1022.68 &&
     (trend_str == "Steady" || trend_str == "Rising slowly"))                              {forecast_text = "No change"; drawWximage(0,35,cloudy_img);}
  if (pressure_now >= 1013.2  && pressure_now <= 1022.68 &&
     (trend_str == "Rising" || trend_str == "Rising rapidly"))                             {forecast_text = "Getting warmer"; drawWximage(0,35,mostlysunny_img);}
  if (pressure_now >= 1013.2  && pressure_now <= 1022.68 &&  trend_str == "Rising slowly") {forecast_text = "Becoming clearer"; drawWximage(0,35,mostlysunny_img);}   
  if (pressure_now >= 1013.2  && pressure_now <= 1022.68 && 
     (trend_str == "Falling slowly" || trend_str == "Falling"))                            {forecast_text = "Expect rain"; drawWximage(0,35,rain_img);}
  if (pressure_now >= 1013.2 && pressure_now <= 1022.68 && trend_str  == "Steady")         {forecast_text = "Clear spells"; drawWximage(0,35,mostlysunny_img);}
  if (pressure_now <= 1013.2 && (trend_str == "Falling slowly" || trend_str == "Falling")) {forecast_text = "Rain in 18-hrs"; drawWximage(0,35,rain_img);}   
  if (pressure_now <= 1013.2 &&  trend_str == "Falling rapidly")                           {forecast_text = "Rain, high winds, clear and cool"; drawWximage(0,35,rain_img);}  
  if (pressure_now <= 1013.2 && (trend_str == "Rising" || trend_str=="Rising rapidly"))    {forecast_text = "Clearing within 12-hrs"; drawWximage(0,35,mostlysunny_img);}
  if (pressure_now <= 1009.1 && trend_str  == "Falling rapidly")                           {forecast_text = "Gales, heavy rain, snow in winter";drawWximage(0,35,tstorms_img);}
  if (pressure_now <= 1009.1 && trend_str  == "Rising rapidly")                            {forecast_text = "Clearing and colder"; drawWximage(0,35,mostlysunny_img);}
  display_text(0,12,forecast_text,YELLOW,1,20);
}

void Draw_Trends(){
  clear_screen();
  display_text(25,0,"Trend Graphs",CYAN,1,12);
  draw_readings(20,20,80,20,8, pressure);    // x,y position, width, height, number of bars
  draw_readings(20,60,80,20,8, temperature); // x,y position, width, height, number of bars
  draw_readings(20,100,80,20,8,humidity);    // x,y position, width, height, number of bars
}

void drawWximage(int x, int y, image_names filename){
  tft.fillRect(x,y, icon_width,icon_height, BLACK);
  if (filename == sunny_img)       tft.drawImage(x,y,&sunny);
  if (filename == mostlysunny_img) tft.drawImage(x,y,&mostlysunny);
  if (filename == cloudy_img)      tft.drawImage(x,y,&cloudy);
  if (filename == rain_img)        tft.drawImage(x,y,&rain);
  if (filename == drizzle_img)     tft.drawImage(x,y,&drizzle);
  if (filename == snow_img)        tft.drawImage(x,y,&snow);
  if (filename == sleet_img)       tft.drawImage(x,y,&sleet);
  if (filename == fog_img)         tft.drawImage(x,y,&fog);
  if (filename == tstorms_img)     tft.drawImage(x,y,&tstorms);
} //sunny, mostlysunny, cloudy, rain, drizzle, snow, sleet, fog, tstorms

void draw_bar(int x, int y, int bar_width, int bar_position, int gscale, float value) {
  if (value > gscale) value = gscale; // Scale is 0 to e.g. 40pixels
  if (value < 0     ) value = 0;      // 0 is top of graph
  tft.fillRect(x+bar_position*(bar_width+3)+0, y, bar_width, gscale+1, BLACK); // Erase previous bar
  tft.drawFastHLine(x+bar_position*(bar_width+2)+0, y+value, bar_width,GREEN); // Draw new bar (value)
  for (int yplus=gscale; yplus >= value; yplus = yplus - 1) {
    tft.drawFastHLine(x+bar_position*(bar_width+2)+0, y + yplus, bar_width,GREEN);
  }
}

// Draws a relative value chart for the paramter requested either Pressure, Temperature or Humidity
// +8 |
// +7 |--  
// +6 |--  --  
// +5 |--  --  --  
// +4 |--  --  --  --  
// +3 |--  --  --  --  --  
// +2 |--  --  --  --  --  --   
// +1 |--  --  --  --  --  --  --   
//  0 +-24+-18+-12+-8-+-3-+-2-+-1-+-0-+
// -1 |  
// -2 |
//    Array holds values of pressure, temeprature and humidity for the last 24-hours
//    [00][01][02][03][04][05][06][07][08][09][10][11][12][13][14][15][16][17][18][19][20][21][22][23] Values are shifted left <-- each hour
//     ^-24Hr              ^-18Hr                  ^-12Hr                  ^-6Hr       ^-3 ^-2 ^-1 ^0Hr
//     P readings in each array position
//     T
//     % 
void draw_readings(int x, int y, int gwidth, int gscale, int num_bars, int entity){
  #define yscale 8 // sets scale of graph + and - axis e.g. +/-8 of the value to be displayed
  float bar_width = gwidth / (num_bars+1);
  int press_hour = time_str.substring(11,13).toInt();
  if (press_hour != last_press_hour) {
    for (int i = 0; i < 23;i++){
      reading[pressure][i]    = reading[pressure][i+1];
      reading[temperature][i] = reading[temperature][i+1];
      reading[humidity][i]    = reading[humidity][i+1];
    }
    reading[pressure][23]    = getPressure_mb().toFloat(); // Update time=now with current values of pressure, temeprature an humidity
    reading[temperature][23] = getCurrC().toFloat();
    reading[humidity][23]    = getRelHum().toFloat();
    last_press_hour  = press_hour;
  }
  display_text(x-18,y-2,         ">+"+String(yscale),CYAN,1,2);
  display_text(x-6, y+gscale/2-2,"0",CYAN,1,2);
  display_text(x-18,y+gscale-2,  "<-"+String(yscale),CYAN,1,2);
  if (entity == pressure)    display_text(x+4,y-9,"Pressure hPa",CYAN,1,8);
  if (entity == temperature) display_text(x+4,y-9,"Temperature °C",CYAN,1,11);
  if (entity == humidity)    display_text(x+4,y-9,"Humidity %",CYAN,1,8);
  display_text(x+(bar_width+3)*0,   y+gscale+2,"-24",CYAN,1,4); // 24hr marker at bar 0
  display_text(x+9+(bar_width+3)*1, y+gscale+2,"-12",CYAN,1,4); // 12hr marker at bar 2
  display_text(x+7+(bar_width+3)*4, y+gscale+2,"-2", CYAN,1,2); // 2hr  marker at bar 5
  display_text(x+5+(bar_width+3)*6, y+gscale+2,"0",  CYAN,1,1); // 0hr  marker at bar 7
  //display.drawFastHLine(x, y+gscale/2, (bar_width+3)*num_bars,CYAN); // Draw centre zero line if needed
  tft.drawFastVLine(x-1, y, gscale+1,CYAN);
  // Only display time for hours 0,5,11,17,20,21,22,23
  int display_points [8] = {0,5,11,17,20,21,22,23};
  for (int bar_num = 0; bar_num < num_bars; bar_num++){
    // Now display a bar for each value at -24, -18, -12, -6, -3, -2, -1 and 0 hour positions for the chosen element of P, t or %
    draw_bar(x,y,       // Position of graph top-left corner
             bar_width, // width of bar-chart, 80 pixels is usually adequate on a 128x64 display
             bar_num,   // The bar element to be drawn e.g. 0 or 1 or 2
             gscale,    // The y-axis scale, 40 pixels is usually adequate on a 128x64 display leaves 24 spares for a title and x-axis
             map(reading[entity][display_points[bar_num]],reading[entity][23]-yscale, reading[entity][23]+yscale, gscale, 0));
             // the value to be displayed scaled to pressure[23] or Temperature[]23] or Humidity[23] elements, so bar 23 is always zero!
  }
}

void UpdateLocalTime(){
  struct tm timeinfo;
  while (!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
  }
  //See http://www.cplusplus.com/reference/ctime/strftime/
  Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S"); // Displays: Saturday, June 24 2017 14:05:49
  time_str = asctime(&timeinfo); // Displays: Sat Jun 24 14:05:49 2017
  time_str = time_str.substring(0,16); // Displays: Sat Jun 24 14:05
  //press_hour = time_str.substring(11,13);
  //Serial.print(press_hour);
}

int StartWiFi(const char* ssid, const char* password){
 int connAttempts = 0;
 display_progress ("Connecting to WiFi...",50);
 Serial.println("\r\nConnecting to: "+String(ssid));
 WiFi.begin(ssid, password);
 while (WiFi.status() != WL_CONNECTED ) {
   delay(500);
   Serial.print(".");
   if(connAttempts > 20) return -5;
   connAttempts++;
 }
 Serial.println("WiFi connected\r\nIP address: ");
 Serial.println(WiFi.localIP());
 return 1;
}

void config_time(){
  display_progress ("Getting time...",75);
  configTime(1, 3600, "pool.ntp.org");
  UpdateLocalTime();
}

void display_progress (String title, int percent) {
  int title_pos = (128 - title.length()*5)/2; // Centre title
  int x_pos = 5; int y_pos = 58;
  int bar_width = 120; int bar_height = 12;
  tft.setTextScale(1);
  tft.fillRect(x_pos-5,y_pos-10,128,8,BLACK); // Clear titles
  display_text(title_pos,y_pos-10,title,GREEN,1,60);
  tft.drawRoundRect(x_pos,y_pos,bar_width+1,bar_height,3,GREEN); // Draw progress bar outline
  tft.fillRoundRect(x_pos+1,y_pos+1,percent*bar_width/100-1,bar_height-2,3,BLUE); // Draw progress
  delay(1000);
}

void display_text(int x, int y, String token, int txt_colour, int txt_size, int field) {
  tft.setCursor(x, y);
  tft.setTextColor(txt_colour);
  tft.setTextScale(txt_size);
  // Size=1=6x8, size=2=10x16
  tft.fillRect(x,y,field*txt_size*6,txt_size*8,BLACK); // Clear old text
  tft.print(token);
  tft.setTextScale(1); // Back to default text size
}

void clear_screen() {
  tft.fillScreen(BLACK);
}  

int Call_API(String* resultString) {
  client.stop();  // Clear any current connections
  Serial.println("Connecting to "+String(host)); // start a new connection
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
   Serial.println("Connection failed");
   return false;
  }
  // Weather Underground API address http://api.wunderground.com/api/YOUR_API_KEY/conditions/q/YOUR_STATE/YOUR_CITY.json
  String url = "http://api.wunderground.com/api/"+apikey+"/conditions/q/"+country+"/"+city+".json";
  Serial.println("Requesting URL: "+String(url));
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
  "Host: " + host + "\r\n" +
  "Connection: close\r\n\r\n");
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
      Serial.println(">>> Client Connection Timeout...Stopping");
      client.stop();
      return false;
    }
  }
  Serial.print("Receiving API weather data");
  while(client.available()) {
    *(resultString) = client.readStringUntil('\r');
    Serial.print(".");
  }
  Serial.println("\r\nClosing connection");
  return true;
}

bool  api_error;
const char* CurrentObservation_location_full;
const char* CurrentObservation_location_city;
const char* CurrentObservation_location_state;
const char* CurrentObservation_location_state_name;
const char* CurrentObservation_location_zip;
const char* CurrentObservation_location_country;
const char* CurrentObservation_location_country_iso3166;
const char* CurrentObservation_latitude;
const char* CurrentObservation_longitude;
const char* CurrentObservation_elevation;
const char* CurrentObservation_local_time_rfc822;
const char* CurrentObservation_observation_time;
const char* CurrentObservation_weather;
const char* CurrentObservation_temperature_string;
const char* CurrentObservation_temp_f;
const char* CurrentObservation_temp_c;
const char* CurrentObservation_dewpoint_f;
const char* CurrentObservation_dewpoint_c;
const char* CurrentObservation_heat_index_f;
const char* CurrentObservation_heat_index_c;
const char* CurrentObservation_windchill_f;
const char* CurrentObservation_windchill_c;
const char* CurrentObservation_relative_humidity;
const char* CurrentObservation_wind_string;
const char* CurrentObservation_wind_mph;
const char* CurrentObservation_wind_kph;
const char* CurrentObservation_wind_dir;
const char* CurrentObservation_wind_degrees;
const char* CurrentObservation_visibility_mi;
const char* CurrentObservation_visibility_km;
const char* CurrentObservation_pressure_mb;
const char* CurrentObservation_pressure_in;
const char* CurrentObservation_pressure_trend;
const char* CurrentObservation_precip_today_string;
const char* CurrentObservation_precip_today_in;
const char* CurrentObservation_precip_today_metric;
const char* CurrentObservation_icon;

bool  CurrCondObj(String* currCondString){
  api_error = false;
  // When using a StaticJsonBuffer you must allocate sufficient memory for the json string returned by the WU api
  Serial.println("Creating object...");
  DynamicJsonBuffer jsonBuffer(5*1024);
  // Create root object and parse the json file returned from the api. The API returns errors and these need to be checked to ensure successful decoding
  JsonObject& root = jsonBuffer.parseObject(*(currCondString));
  if(root.success()) {
    Serial.println("root object created...");
    JsonObject& CurrentObservation = root["current_observation"];
    if(CurrentObservation.success()) {
      Serial.println("CurrentObservation object created...");
      // Now process the  "display_location":
      JsonObject& CurrentObservation_display_location     = CurrentObservation["display_location"]; // Set root location
      
      CurrentObservation_location_full            = CurrentObservation_display_location["full"]; 
      CurrentObservation_location_city            = CurrentObservation_display_location["city"];
      CurrentObservation_location_state           = CurrentObservation_display_location["state"]; 
      CurrentObservation_latitude                 = CurrentObservation_display_location["latitude"]; 
      CurrentObservation_longitude                = CurrentObservation_display_location["longitude"]; 
      CurrentObservation_elevation                = CurrentObservation_display_location["elevation"]; 
      CurrentObservation_location_state_name      = CurrentObservation_display_location["state_name"]; 
      CurrentObservation_location_country         = CurrentObservation_display_location["country"]; 
      CurrentObservation_location_country_iso3166 = CurrentObservation_display_location["country_iso3166"]; 
      CurrentObservation_location_zip             = CurrentObservation_display_location["zip"]; 
      
      CurrentObservation_local_time_rfc822        = CurrentObservation["local_time_rfc822"]; 
      CurrentObservation_observation_time         = CurrentObservation["observation_time"]; 
      CurrentObservation_weather                  = CurrentObservation["weather"]; 
      CurrentObservation_temperature_string       = CurrentObservation["temperature_string"]; 
      CurrentObservation_temp_f                   = CurrentObservation["temp_f"]; 
      CurrentObservation_temp_c                   = CurrentObservation["temp_c"]; 
      CurrentObservation_dewpoint_f               = CurrentObservation["dewpoint_f"]; 
      CurrentObservation_dewpoint_c               = CurrentObservation["dewpoint_c"]; 
      CurrentObservation_heat_index_f             = CurrentObservation["heat_index_f"]; 
      CurrentObservation_heat_index_c             = CurrentObservation["heat_index_c"]; 
      CurrentObservation_windchill_f              = CurrentObservation["windchill_f"]; 
      CurrentObservation_windchill_c              = CurrentObservation["windchill_c"];       
      CurrentObservation_relative_humidity        = CurrentObservation["relative_humidity"]; 
      CurrentObservation_wind_string              = CurrentObservation["wind_string"]; 
      CurrentObservation_wind_mph                 = CurrentObservation["wind_mph"]; 
      CurrentObservation_wind_kph                 = CurrentObservation["wind_kph"]; 
      CurrentObservation_wind_dir                 = CurrentObservation["wind_dir"]; 
      CurrentObservation_wind_degrees             = CurrentObservation["wind_degrees"]; 
      CurrentObservation_pressure_mb              = CurrentObservation["pressure_mb"]; 
      CurrentObservation_pressure_in              = CurrentObservation["pressure_in"]; 
      CurrentObservation_pressure_trend           = CurrentObservation["pressure_trend"]; 
      CurrentObservation_precip_today_string      = CurrentObservation["precip_today_string"]; 
      CurrentObservation_precip_today_in          = CurrentObservation["precip_today_metric"];
      CurrentObservation_precip_today_metric      = CurrentObservation["precip_today_metric"]; 
      CurrentObservation_visibility_mi            = CurrentObservation["visibility_mi"];
      CurrentObservation_visibility_km            = CurrentObservation["visibility_km"];
      CurrentObservation_icon                     = CurrentObservation["icon"]; 
      return true;
    }
    else
    {
      // if the object could not be created, then return an error make an API call the next time around
      Serial.println("Unable to obtain current observation object");
      api_error = true;
      return false;
    }
  }
  else
  {
    // if the root object could not be created, then return an error make an API call the next time around
    Serial.println("Unable to create a root object");
    api_error = true;
    return false;
  }
}

// Functions for weather data.
String getCountry()          {return CurrentObservation_location_country;}
String getCity()             {return CurrentObservation_location_city;}
String getCityState()        {return CurrentObservation_location_full;}
String getState()            {return CurrentObservation_location_state_name;}
String getZip()              {return CurrentObservation_location_zip;}
String getLatitude()         {return CurrentObservation_latitude;}
String getLongitude()        {return CurrentObservation_longitude;}
String getElevation()        {return CurrentObservation_elevation;}; 
String getLocalTime()        {return CurrentObservation_local_time_rfc822;}
String getObsTime()          {return CurrentObservation_observation_time;}
String getCurrWeather()      {return CurrentObservation_weather;}
String getCurrTempString()   {return CurrentObservation_temperature_string;}
String getCurrF()            {return CurrentObservation_temp_f;}
String getCurrC()            {return CurrentObservation_temp_c;}
String getDewPointF()        {return CurrentObservation_dewpoint_f;}
String getDewPointC()        {return CurrentObservation_dewpoint_c;}
String getHeatindexF()       {return CurrentObservation_heat_index_f;}
String getHeatindexC()       {return CurrentObservation_heat_index_c;}
String getWindchillF()       {return CurrentObservation_windchill_f;}
String getWindchillC()       {return CurrentObservation_windchill_c;}
String getRelHum()           {return CurrentObservation_relative_humidity;}
String getWindString()       {return CurrentObservation_wind_string;}
String getWindMPH()          {return CurrentObservation_wind_mph;}
String getWindKPH()          {return CurrentObservation_wind_kph;}
String getWindDir()          {return CurrentObservation_wind_dir;}
String getWindDegrees()      {return CurrentObservation_wind_degrees;}
String getPressure_mb()      {return CurrentObservation_pressure_mb;}
String getPressure_in()      {return CurrentObservation_pressure_in;}
String getPressure_trend()   {return CurrentObservation_pressure_trend;}
String getPrecipTodayString(){return CurrentObservation_precip_today_string;}
String getPrecipTodayInches(){return CurrentObservation_precip_today_in;}
String getPrecipTodayMet()   {return CurrentObservation_precip_today_metric;}
String getVisibility_mi ()   {return CurrentObservation_visibility_mi;}
String getVisibility_km ()   {return CurrentObservation_visibility_km;}
String getWeatherIcon()      {return CurrentObservation_icon;}

/* Typical API response:
{
  "response": {
  "version":"0.1",
  "termsofService":"http://www.wunderground.com/weather/api/d/terms.html",
  "features": {
  "conditions": 1
  }
  }
  , "CurrentObservation": {
    "image": {
    "url":"http://icons.wxug.com/graphics/wu2/logo_130x80.png",
    "title":"Weather Underground",
    "link":"http://www.wunderground.com"
    },
    "display_location": {
    "full":"Bath, United Kingdom",
    "city":"Bath",
    "state":"WIL",
    "state_name":"United Kingdom",
    "country":"UK",
    "country_iso3166":"GB",
    "zip":"00000",
    "magic":"58",
    "wmo":"03740",
    "latitude":"51.36999893",
    "longitude":"-2.14000010",
    "elevation":"64.0"
    },
    "observation_location": {
    "full":"Bath, Bath, ",
    "city":"Bath, Bath",
    "state":"",
    "country":"GB",
    "country_iso3166":"GB",
    "latitude":"51.364689",
    "longitude":"-2.129354",
    "elevation":"131 ft"
    },
    "estimated": {
    },
    "station_id":"IBATH2",
    "observation_time":"Last Updated on June 21, 9:00 AM BST",
    "observation_time_rfc822":"Wed, 21 Jun 2017 09:00:16 +0100",
    "observation_epoch":"1498032016",
    "local_time_rfc822":"Wed, 21 Jun 2017 09:09:36 +0100",
    "local_epoch":"1498032576",
    "local_tz_short":"BST",
    "local_tz_long":"Europe/London",
    "local_tz_offset":"+0100",
    "weather":"Clear",
    "temperature_string":"70.6 F (21.4 C)",
    "temp_f":70.6,
    "temp_c":21.4,
    "relative_humidity":"82%",
    "wind_string":"From the ENE at 2.3 MPH Gusting to 6.0 MPH",
    "wind_dir":"ENE",
    "wind_degrees":71,
    "wind_mph":2.3,
    "wind_gust_mph":"6.0",
    "wind_kph":3.7,
    "wind_gust_kph":"9.7",
    "pressure_mb":"1016",
    "pressure_in":"30.01",
    "pressure_trend":"-",
    "dewpoint_string":"65 F (18 C)",
    "dewpoint_f":65,
    "dewpoint_c":18,
    "heat_index_string":"NA",
    "heat_index_f":"NA",
    "heat_index_c":"NA",
    "windchill_string":"NA",
    "windchill_f":"NA",
    "windchill_c":"NA",
    "feelslike_string":"70.6 F (21.4 C)",
    "feelslike_f":"70.6",
    "feelslike_c":"21.4",
    "visibility_mi":"7",
    "visibility_km":"11",
    "solarradiation":"--",
    "UV":"-1","precip_1hr_string":"0.00 in ( 0 mm)",
    "precip_1hr_in":"0.00",
    "precip_1hr_metric":" 0",
    "precip_today_string":"0.00 in (0 mm)",
    "precip_today_in":"0.00",
    "precip_today_metric":"0",
    "soil_temp_f": "-88.0",
    "soil_moisture": "1.0",
    "leaf_wetness": "4.0",
    "icon":"clear",
    "icon_url":"http://icons.wxug.com/i/c/k/clear.gif",
    "forecast_url":"http://www.wunderground.com/global/stations/03740.html",
    "history_url":"http://www.wunderground.com/weatherstation/WXDailyHistory.asp?ID=IMELKSHA2",
    "ob_url":"http://www.wunderground.com/cgi-bin/findweather/getForecast?query=51.364689,-2.129354",
    "nowcast":""
  }
}
*/
