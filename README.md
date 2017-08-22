
# ESP32-Connect-and-use-SSD1351-1.5-Colour-OLE

Install the SSD13XX Library

Download the library from:

https://github.com/sumotoy/SSD_13XX

Unpack  and copy to the IDE Libraries Folder

Go to the Libraries Folder and then open the folder ‘SSD_13XX’

Then Open the folder ‘_settings’

Use Notepad to open the file ‘SSD_13XX_settings.h’

Edit the lines thus:

/*----------------------------------------------------------------------------------
	//#include "../_display/SSD_1331_96x64.h“  ‘Add comment markers
	//#include "../_display/SSD_1331_REDPCB.h"
	//#include "../_display/SSD_1332_96x64.h"
	#include "../_display/SSD_1351_128x128.h“ ‘Remove comment markers for this display type
	-----------------------------------------------------------------------------------*/
Save the file and Exit, start the IDE
