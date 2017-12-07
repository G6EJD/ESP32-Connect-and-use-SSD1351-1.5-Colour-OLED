
/*******************************************************************************
* name: sunny
*
* preset name: Color R5G6B5
* data block size: 16 bit(s), uint16_t
* RLE compression enabled: no
* conversion type: Color, not_used not_used
* bits per pixel: 16
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
* ------------------------------------------------------------------------------
* Created by a custom template of LCD-Image-Converter for .s.u.m.o.t.o.y.
* Image template version: 1.3
* Note: 
* ------------------------------------------------------------------------------
*******************************************************************************/
#if !defined(SUMO_IMG_LIB_sunny)
#define SUMO_IMG_LIB_sunny

#include <stdlib.h>


static const uint16_t image_data_sunny[3000] 
#if defined(_FORCE_PROGMEM__)
PROGMEM 
#endif
= { 0x6412, 0x6412, 0x6c13, 0x6c33, 0x6412, 0x6412, 0x6c13, 0x6c33, 0x7454, 0x6c74, 0x6c74, 0x6c75, 0x6c95, 0x6c95, 0x6c96, 0x6cb6, 0x6cb6, 0x6cd6, 0x74d7, 0x74d7, 0x74d7, 0x74d7, 0x74d7, 0x6cb6, 0x6cd5, 0x74d5, 0x6cb5, 0x74d5, 0x74b5, 0x6cb5, 0x74d6, 0x6cb5, 0x6cb5, 0x6cd5, 0x6cb4, 0x6cb6, 0x6cd6, 0x74d6, 0x74f6, 0x6cd6, 0x6cd5, 0x6cd5, 0x6cb5, 0x6cb5, 0x6c95, 0x6c94, 0x6c74, 0x6c73, 0x6c73, 0x6c74, 0x6c53, 0x7454, 0x7474, 0x7474, 0x6c54, 0x6c54, 0x6c54, 0x6c34, 0x6c34, 0x6c34, 0x6412, 0x6412, 0x6c13, 0x6c13, 0x6412, 0x6412, 0x6412, 0x6c33, 0x6c54, 0x6c74, 0x6c54, 0x6c74, 0x6c75, 0x7495, 0x6c95, 0x6c96, 0x6cb6, 0x6cb6, 0x6cb6, 0x6cb6, 0x6cb6, 0x6cb6, 0x6cb5, 0x6cb5, 0x74d5, 0x74d5, 0x74b5, 0x7cd5, 0x74b5, 0x7cd6, 0x7cd6, 0x74d6, 0x74b5, 0x74d5, 0x74d6, 0x74b6, 0x6cb6, 0x74d6, 0x74b6, 0x6c96, 0x6c96, 0x6c96, 0x6cb6, 0x6c95, 0x6c95, 0x6c95, 0x6c74, 0x6c74, 0x6c73, 0x7474, 0x6c54, 0x6c54, 0x6c54, 0x6c54, 0x6c54, 0x6c54, 0x6c34, 0x6c54, 0x6c54, 0x6c33, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6c33, 0x6c33, 0x6c54, 0x7474, 0x6c74, 0x6c74, 0x6c75, 0x6c95, 0x6c95, 0x6c95, 0x6c95, 0x6c95, 0x6c95, 0x6cb5, 0x74b5, 0x7cf6, 0x74b4, 0x74b4, 0x7cd5, 0x7cb4, 0x7cd5, 0x7cb4, 0x8516, 0x7cd5, 0x84f6, 0x7cb5, 0x7cd5, 0x7cd5, 0x7495, 0x7495, 0x7cb6, 0x7495, 0x6c75, 0x6c75, 0x6c76, 0x6c76, 0x6c96, 0x6c96, 0x6c75, 0x6c74, 0x6c53, 0x6c74, 0x6c33, 0x6c33, 0x7434, 0x6c34, 0x6c54, 0x7475, 0x6c54, 0x6413, 0x63f3, 0x5371, 0x4b2f, 0x63f2, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6c13, 0x6c33, 0x6c33, 0x6c74, 0x7494, 0x6c74, 0x6c74, 0x6c95, 0x6c95, 0x6c74, 0x6c75, 0x6c95, 0x7495, 0x74b5, 0x74b5, 0x8d56, 0x8536, 0x7cd4, 0x84f5, 0x84f4, 0x8d14, 0x84f4, 0x9d76, 0x8d15, 0x8d15, 0x84f4, 0x9535, 0x8cf5, 0x7cb4, 0x84f5, 0x84d5, 0x7494, 0x7474, 0x7474, 0x6c75, 0x6c54, 0x6c55, 0x6476, 0x6475, 0x6454, 0x6c53, 0x6c33, 0x6c13, 0x7433, 0x7454, 0x7454, 0x6413, 0x5bb2, 0x4b50, 0x3a8d, 0x220b, 0x19ca, 0x1989, 0x63f2, 0x63f2, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6c33, 0x6453, 0x6433, 0x6c74, 0x74b5, 0x7495, 0x6c74, 0x6c54, 0x6c74, 0x6c75, 0x7496, 0x74b5, 0x7cb5, 0x7cb4, 0x9556, 0x9db8, 0x8d15, 0x9536, 0x9555, 0x9574, 0x9554, 0xae16, 0x9d74, 0x9554, 0x9534, 0xa5b6, 0x9514, 0x8cf4, 0x8d35, 0x84d4, 0x7cb3, 0x7cb3, 0x7473, 0x6c73, 0x6c53, 0x6433, 0x6435, 0x6455, 0x6c75, 0x6c74, 0x7494, 0x7454, 0x6c13, 0x6391, 0x4b0f, 0x2a4c, 0x21cb, 0x19ca, 0x198a, 0x1169, 0x1169, 0x1169, 0x63f2, 0x63f2, 0x6412, 0x6412, 0x6412, 0x6412, 0x6412, 0x6c13, 0x6c33, 0x6453, 0x6433, 0x6c53, 0x6c74, 0x7cb5, 0x7494, 0x6c53, 0x6c53, 0x7495, 0x7c96, 0x7cd6, 0x84d6, 0x84d5, 0x9516, 0xb619, 0xa597, 0x9d36, 0x9d75, 0x9534, 0x9553, 0xb657, 0x9d73, 0x9532, 0xa574, 0xb617, 0x9d34, 0xa596, 0x9d96, 0x84d3, 0x84f3, 0x7cd3, 0x7472, 0x74b3, 0x6c72, 0x6c74, 0x6455, 0x74b6, 0x74b5, 0x7cd5, 0x7474, 0x5bb1, 0x5b91, 0x4ace, 0x2a2c, 0x1189, 0x118a, 0x1189, 0x1169, 0x0948, 0x0928, 0x0928, 0x63d2, 0x63f2, 0x63f2, 0x63f2, 0x63f2, 0x6412, 0x6412, 0x6412, 0x6412, 0x6433, 0x6433, 0x6453, 0x6433, 0x6c53, 0x7cf5, 0x8516, 0x7494, 0x7494, 0x7c95, 0x84f6, 0x9558, 0x9d37, 0x9d37, 0xbe3a, 0xbe19, 0x9d14, 0x9d55, 0xa575, 0xadd5, 0xceb8, 0xb615, 0xa572, 0xc656, 0xb5d4, 0x9cf1, 0xadb5, 0x9d54, 0x9514, 0x9514, 0x7c92, 0x84d4, 0x84f5, 0x7cb4, 0x6c74, 0x5bd3, 0x4b70, 0x5bd2, 0x7494, 0x63f2, 0x63f2, 0x9558, 0x7475, 0x3a8e, 0x19aa, 0x118a, 0x1149, 0x0949, 0x0949, 0x0928, 0x0908, 0x5bd1, 0x5bd1, 0x5bd1, 0x63d2, 0x63f2, 0x63f2, 0x63f2, 0x63f2, 0x6412, 0x6412, 0x6433, 0x6433, 0x63f2, 0x6412, 0x7473, 0x9577, 0x9dd8, 0x84d4, 0x7cb4, 0x9516, 0xa5b9, 0xad99, 0x94d5, 0xb5d7, 0xe73b, 0xd6b8, 0xdf1b, 0xef7c, 0xef9b, 0xfffb, 0xf7b9, 0xef77, 0xf7b8, 0xe6d5, 0xd654, 0xbe14, 0x94f0, 0x94d1, 0x94f2, 0x9d54, 0xa576, 0x7c73, 0x63b0, 0x42cd, 0x2a0b, 0x2a0a, 0x534f, 0x7c94, 0x5bb0, 0x63d2, 0x8517, 0x6413, 0x2a2c, 0x118a, 0x118a, 0x0949, 0x0929, 0x0929, 0x0928, 0x0108, 0x5bd1, 0x5bd1, 0x5bd1, 0x63d2, 0x63d2, 0x63d2, 0x63f2, 0x63f2, 0x63f2, 0x5c12, 0x6412, 0x6412, 0x6412, 0x6c32, 0x7473, 0x7473, 0xa5d9, 0xb659, 0xa5d6, 0x9536, 0x9516, 0xad98, 0xc639, 0xe73c, 0xfffd, 0xfffc, 0xffdb, 0xffdb, 0xffb8, 0xf7b6, 0xffb5, 0xffd5, 0xff94, 0xff94, 0xffb5, 0xf776, 0xd693, 0xad50, 0xa510, 0xb5b4, 0x94b2, 0x634d, 0x4acc, 0x428b, 0x324b, 0x42cc, 0x5bb0, 0x7cb3, 0x6c32, 0x3aee, 0x326c, 0x220b, 0x118a, 0x1149, 0x118a, 0x0949, 0x0928, 0x0928, 0x0928, 0x0108, 0x5bd1, 0x5bd1, 0x5bd1, 0x63d2, 0x63d1, 0x5bd1, 0x63d2, 0x63d2, 0x63f2, 0x5c12, 0x5c12, 0x6412, 0x6432, 0x6c52, 0x7473, 0x7c73, 0x84d4, 0xbe99, 0xcf1a, 0xa5b6, 0xadb7, 0xdf1d, 0xffff, 0xfffe, 0xffdb, 0xffda, 0xffd9, 0xffb7, 0xffd6, 0xffd4, 0xffd2, 0xff91, 0xff70, 0xff50, 0xff30, 0xf752, 0xff73, 0xf754, 0xd693, 0x946d, 0x632a, 0x73ad, 0x8451, 0x8c93, 0x7452, 0x7411, 0x5b8f, 0x6c11, 0x538f, 0x220a, 0x1189, 0x0969, 0x0949, 0x0928, 0x0949, 0x0908, 0x0928, 0x0928, 0x0908, 0x0108, 0x5b90, 0x5b90, 0x63b1, 0x63d2, 0x63d2, 0x63d2, 0x63d2, 0x63d2, 0x63d2, 0x63d3, 0x5bd1, 0x6412, 0x6c33, 0x7433, 0x8472, 0x8493, 0x8d15, 0x9534, 0xc6d8, 0xdf5b, 0xefbc, 0xfffd, 0xffdc, 0xffdb, 0xffdb, 0xffdb, 0xffda, 0xffda, 0xffda, 0xffb9, 0xffd7, 0xffd6, 0xffd4, 0xffb2, 0xffb0, 0xfeeb, 0xfe49, 0xfe4a, 0xfeee, 0xcdef, 0x840c, 0x8c2f, 0xad54, 0xd698, 0xc657, 0x7c30, 0x3a8c, 0x3acd, 0x224b, 0x11ca, 0x116b, 0x1169, 0x0948, 0x198a, 0x198a, 0x0948, 0x0948, 0x0928, 0x0108, 0x00e7, 0x5370, 0x5350, 0x5b91, 0x5b91, 0x5b91, 0x5bb1, 0x63d1, 0x63f2, 0x6bf2, 0x63f3, 0x63f1, 0x6411, 0x63f1, 0x7452, 0x7c51, 0x8cf3, 0x9515, 0x84b3, 0xb616, 0xf7fe, 0xfffc, 0xfffb, 0xffdb, 0xffdb, 0xfffc, 0xfffd, 0xffdc, 0xffdb, 0xffdb, 0xffb9, 0xffd8, 0xffd5, 0xffb3, 0xff91, 0xff8f, 0xff2c, 0xf66a, 0xedc9, 0xf68e, 0xff96, 0xe6d7, 0xce56, 0xef5a, 0xe6f9, 0xad75, 0x6b8e, 0x322b, 0x19ca, 0x11a8, 0x1189, 0x116a, 0x1149, 0x0928, 0x19aa, 0x19ca, 0x1169, 0x0948, 0x0928, 0x0108, 0x00e7, 0x5b70, 0x5350, 0x5b91, 0x5b91, 0x5b90, 0x5b91, 0x5bb1, 0x63d1, 0x63d2, 0x6c13, 0x7493, 0x7cd3, 0x7cb3, 0x7c92, 0x8cb2, 0x94f3, 0x84b2, 0xa554, 0xef7b, 0xffdc, 0xf7da, 0xffd9, 0xffd9, 0xffda, 0xfffc, 0xfffe, 0xffdc, 0xffdb, 0xffda, 0xffb8, 0xffb6, 0xffb3, 0xff90, 0xff6e, 0xff4d, 0xf74e, 0xff0e, 0xfed0, 0xf6f3, 0xf778, 0xfffc, 0xffdc, 0xef39, 0xad32, 0x83f0, 0x632d, 0x322b, 0x21ea, 0x19c9, 0x1189, 0x094a, 0x0929, 0x0928, 0x1169, 0x1169, 0x0928, 0x0928, 0x0928, 0x0108, 0x00e7, 0x5b70, 0x5370, 0x5b90, 0x5b90, 0x5b70, 0x5b91, 0x5b91, 0x5b91, 0x5b91, 0x5bb1, 0x6411, 0x7cb2, 0x9575, 0xadd6, 0xb616, 0xa574, 0x9d32, 0xdf39, 0xfffa, 0xf798, 0xffd8, 0xffd7, 0xfff8, 0xffd9, 0xffdc, 0xffdd, 0xffdb, 0xfffa, 0xffd8, 0xffb6, 0xffb3, 0xffb1, 0xff8e, 0xff4c, 0xff4b, 0xf74f, 0xf6cf, 0xff14, 0xff58, 0xffdc, 0xfffe, 0xfffe, 0xd697, 0x94b0, 0x83d0, 0x7bf0, 0x4aac, 0x2a0a, 0x19a8, 0x0948, 0x0949, 0x0929, 0x0928, 0x0928, 0x0108, 0x0908, 0x0928, 0x0928, 0x0108, 0x00e7, 0x5350, 0x534f, 0x5350, 0x5350, 0x5350, 0x5b70, 0x5b70, 0x5b91, 0x5b91, 0x5b91, 0x63d0, 0x6c0f, 0x744f, 0x9532, 0xbe56, 0xd6f8, 0xdf18, 0xfff8, 0xffb4, 0xffb4, 0xffb5, 0xffd6, 0xfff7, 0xffd8, 0xffda, 0xffdb, 0xfff9, 0xfff8, 0xffd6, 0xffb3, 0xffb1, 0xff8e, 0xff8c, 0xff6b, 0xff4a, 0xf6ee, 0xfed0, 0xfed3, 0xff79, 0xffbd, 0xffde, 0xffdd, 0xef79, 0xbdd3, 0x8c0f, 0x6b6c, 0x4248, 0x21a7, 0x21c9, 0x19a9, 0x118a, 0x0949, 0x0928, 0x0928, 0x0928, 0x0928, 0x0928, 0x0928, 0x0108, 0x00e7, 0x5350, 0x4b2f, 0x5350, 0x5350, 0x5350, 0x5370, 0x5370, 0x5b70, 0x5b70, 0x5bb0, 0x63f0, 0x6c0f, 0x742e, 0x8490, 0x8caf, 0xad91, 0xf7d9, 0xffd4, 0xff90, 0xffb2, 0xffb4, 0xffb6, 0xffb7, 0xffd8, 0xffd9, 0xffd9, 0xffd7, 0xffd6, 0xf7b3, 0xf7b1, 0xf7af, 0xf78d, 0xff8c, 0xff6b, 0xff4b, 0xfeec, 0xfead, 0xfeb0, 0xff35, 0xff38, 0xff18, 0xff16, 0xffb5, 0xb5ad, 0x6308, 0x7bac, 0x6b6c, 0x4acb, 0x3a6b, 0x21ea, 0x0969, 0x0928, 0x0928, 0x0108, 0x0108, 0x0928, 0x0928, 0x0928, 0x0108, 0x00e7, 0x534f, 0x4b2f, 0x534f, 0x5350, 0x5350, 0x5350, 0x5370, 0x5370, 0x5b70, 0x63d0, 0x7431, 0x7c71, 0x8cd1, 0x94f1, 0x8caf, 0xa52f, 0xf7b7, 0xffb0, 0xff6d, 0xff91, 0xff93, 0xffb6, 0xffb7, 0xffb7, 0xffb6, 0xffb5, 0xffb4, 0xff93, 0xf791, 0xf7af, 0xf7ae, 0xff8d, 0xff6c, 0xff2c, 0xf6eb, 0xfeec, 0xfeac, 0xfe6e, 0xfe91, 0xfe52, 0xf5d1, 0xf5ce, 0xfead, 0xe6ad, 0xb590, 0xa531, 0x73cd, 0x4268, 0x29c7, 0x1988, 0x0948, 0x0128, 0x0128, 0x0908, 0x0108, 0x0928, 0x0928, 0x0928, 0x0108, 0x00e7, 0x532f, 0x4b0f, 0x532f, 0x5350, 0x5350, 0x5350, 0x5350, 0x5370, 0x5370, 0x5baf, 0x6bf0, 0x7c51, 0x9cf2, 0xb5b5, 0xbdf5, 0xdef5, 0xffd6, 0xff6e, 0xff6d, 0xff90, 0xffb2, 0xffb4, 0xffb5, 0xffb4, 0xffb2, 0xff91, 0xff91, 0xff90, 0xffae, 0xffac, 0xffab, 0xff8b, 0xff6b, 0xff0b, 0xfecb, 0xfe8b, 0xfe6c, 0xfe2c, 0xfded, 0xf56c, 0xf4aa, 0xecc7, 0xf5a7, 0xff2c, 0x9469, 0x5aa8, 0x5289, 0x39e7, 0x2186, 0x1968, 0x0948, 0x0128, 0x0128, 0x0908, 0x0108, 0x0928, 0x0928, 0x0928, 0x0108, 0x00e7, 0x4b2f, 0x4b0f, 0x4b2f, 0x532f, 0x532f, 0x534f, 0x5350, 0x5350, 0x5370, 0x5bcf, 0x638f, 0x73cf, 0x8450, 0x94b1, 0x9cf1, 0xe715, 0xffd4, 0xf74d, 0xff6d, 0xff8e, 0xffaf, 0xffb0, 0xffd0, 0xffaf, 0xff8e, 0xff8d, 0xff8d, 0xffac, 0xffaa, 0xff88, 0xff67, 0xff47, 0xff07, 0xfec8, 0xfe88, 0xfe29, 0xfe0a, 0xfdaa, 0xfd6a, 0xf4a7, 0xfc45, 0xf484, 0xf524, 0xf6ea, 0x6b44, 0x49e6, 0x526b, 0x4228, 0x29a7, 0x1988, 0x0948, 0x0127, 0x0127, 0x0908, 0x0108, 0x0928, 0x0928, 0x0928, 0x0108, 0x00e7, 0x4b2f, 0x4b0e, 0x4b0f, 0x4b2f, 0x4b2f, 0x532f, 0x532f, 0x5350, 0x534f, 0x5baf, 0x6bb0, 0x73d0, 0x8430, 0x8c50, 0x840e, 0xd672, 0xff92, 0xf70c, 0xf72c, 0xf76c, 0xff8c, 0xffac, 0xf7ab, 0xf78a, 0xf76a, 0xff6a, 0xf789, 0xf788, 0xf786, 0xf764, 0xf702, 0xf6c2, 0xfe62, 0xfe02, 0xf5a3, 0xfd64, 0xfd24, 0xf4a4, 0xec44, 0xf423, 0xfc42, 0xfc61, 0xf502, 0xfee9, 0x7bc6, 0x49c7, 0x522b, 0x4208, 0x2987, 0x1948, 0x0927, 0x0127, 0x0107, 0x0908, 0x0108, 0x0928, 0x0928, 0x0928, 0x0107, 0x00e7, 0x4b0f, 0x4b0e, 0x4b0e, 0x4b0f, 0x4b0f, 0x4b0f, 0x4b2f, 0x534f, 0x534f, 0x5b8f, 0x6430, 0x7450, 0x9cd2, 0xad54, 0xadb3, 0xe734, 0xfeed, 0xf6ac, 0xf70d, 0xff4c, 0xff49, 0xff26, 0xff26, 0xff48, 0xff4c, 0xff4f, 0xefad, 0xf7a8, 0xff43, 0xfee2, 0xfea1, 0xfe62, 0xfe22, 0xfda2, 0xfd22, 0xed24, 0xfc83, 0xfbe3, 0xfc04, 0xf423, 0xfc42, 0xf442, 0xecc3, 0xfec9, 0xce4c, 0xacee, 0x9c8f, 0x7bca, 0x5309, 0x3a6a, 0x21c9, 0x1189, 0x1148, 0x1127, 0x0927, 0x0907, 0x0907, 0x0907, 0x00e6, 0x00c6, 0x4b0e, 0x4aee, 0x4aee, 0x4b0f, 0x4b0f, 0x4b0f, 0x4b0f, 0x4b2f, 0x532f, 0x5b70, 0x5bd0, 0x6bf0, 0x8c51, 0x9cd3, 0x94d1, 0xdef4, 0xfef0, 0xf64a, 0xfeab, 0xfea8, 0xf665, 0xfec5, 0xfee6, 0xff4c, 0xff72, 0xff77, 0xf7b4, 0xf76e, 0xfee7, 0xfe83, 0xfe22, 0xfe02, 0xfdc2, 0xfd43, 0xfce3, 0xecc3, 0xf423, 0xfbe4, 0xf424, 0xf443, 0xfc23, 0xfc64, 0xece3, 0xf6a9, 0xa4c8, 0x83aa, 0x8c0d, 0x6b6a, 0x52c9, 0x3a6a, 0x21ea, 0x11a9, 0x1168, 0x1148, 0x1127, 0x0907, 0x0907, 0x0907, 0x08e6, 0x00e6, 0x4aee, 0x4aee, 0x4aee, 0x4b0e, 0x4b0e, 0x4b0e, 0x4b0f, 0x4b0f, 0x4b0f, 0x534f, 0x538f, 0x63af, 0x7bcf, 0x8c30, 0x73ac, 0xbdb0, 0xff31, 0xfe09, 0xfe07, 0xf5c5, 0xf604, 0xfe44, 0xf687, 0xff4f, 0xffd8, 0xfffe, 0xfffb, 0xff94, 0xfeab, 0xfe05, 0xfda3, 0xfd82, 0xf542, 0xf4c3, 0xfc84, 0xf442, 0xf3e3, 0xf3e4, 0xf443, 0xf443, 0xfc44, 0xfc44, 0xf504, 0xf6ea, 0x6b04, 0x3963, 0x4a07, 0x39c5, 0x2144, 0x1126, 0x0907, 0x0927, 0x0928, 0x0927, 0x0907, 0x08e6, 0x08e6, 0x08e6, 0x08e6, 0x00c6, 0x4aee, 0x42ee, 0x42ee, 0x4aee, 0x4b0e, 0x4b0e, 0x4b0e, 0x4b0e, 0x4b0e, 0x530f, 0x534f, 0x636e, 0x7bce, 0x83ee, 0x7c0c, 0xb5af, 0xff51, 0xfde8, 0xf544, 0xf543, 0xfdc4, 0xfde3, 0xfe27, 0xfeef, 0xff99, 0xffff, 0xffdc, 0xff35, 0xfe4c, 0xfd86, 0xfd44, 0xfd03, 0xf4c2, 0xf463, 0xfc25, 0xfbe3, 0xfbe4, 0xf423, 0xf463, 0xf443, 0xfc65, 0xf423, 0xf5a5, 0xf6eb, 0xad0f, 0x8c0e, 0x62eb, 0x3a07, 0x2186, 0x1947, 0x0908, 0x0928, 0x1148, 0x1127, 0x0907, 0x0907, 0x0907, 0x08e6, 0x08e6, 0x00e6, 0x42cd, 0x42cd, 0x42ed, 0x4aee, 0x4b0e, 0x4b2e, 0x4b0e, 0x4b0e, 0x4b0e, 0x530e, 0x532e, 0x5b4d, 0x842f, 0xad73, 0xce75, 0xef55, 0xff91, 0xf5c8, 0xece5, 0xf504, 0xfd24, 0xfd43, 0xfda6, 0xfe2c, 0xfed2, 0xff58, 0xff16, 0xfe90, 0xfda9, 0xfd05, 0xfcc4, 0xfc63, 0xf442, 0xf403, 0xf3e4, 0xfbe5, 0xfc04, 0xf442, 0xf463, 0xfc65, 0xfc65, 0xf482, 0xfe67, 0xb547, 0x7329, 0x7bad, 0x738f, 0x4aab, 0x3208, 0x1988, 0x0928, 0x1168, 0x1168, 0x1127, 0x08e6, 0x08e6, 0x0907, 0x0907, 0x0927, 0x0907, 0x4aee, 0x4b0e, 0x532f, 0x532f, 0x4b0e, 0x4aee, 0x4acd, 0x4b0e, 0x532e, 0x5b4e, 0x6bf0, 0x8c92, 0xa532, 0xb593, 0xb592, 0x948c, 0xc5ed, 0xfeaf, 0xf56a, 0xf529, 0xfd07, 0xfce6, 0xfd06, 0xfd67, 0xf5ca, 0xf62d, 0xfe0c, 0xfd69, 0xf4c5, 0xfc84, 0xfc24, 0xf3e3, 0xf402, 0xf403, 0xf404, 0xfc05, 0xfc24, 0xfc83, 0xfc84, 0xfc64, 0xfca2, 0xed22, 0xff2b, 0x83e5, 0x41a4, 0x4a07, 0x424a, 0x29a7, 0x1987, 0x1147, 0x0927, 0x0926, 0x0927, 0x0907, 0x08e6, 0x00e6, 0x08e6, 0x0907, 0x0907, 0x0907, 0x4aee, 0x4aee, 0x4aee, 0x4acd, 0x4aed, 0x530e, 0x532f, 0x5b6f, 0x6390, 0x7410, 0x7c52, 0x8471, 0x7bee, 0x8c0f, 0x8c50, 0x736b, 0xa4ad, 0xff35, 0xfeb2, 0xf5cf, 0xfd6d, 0xf4c9, 0xf486, 0xf4a5, 0xf4c5, 0xeca5, 0xec85, 0xf464, 0xf443, 0xfc04, 0xfbe4, 0xfbe4, 0xfc23, 0xf423, 0xf423, 0xfc44, 0xfc64, 0xfc64, 0xfc84, 0xf483, 0xecc1, 0xfe46, 0xeeee, 0xad2f, 0x7bac, 0x52a9, 0x31c8, 0x2187, 0x1986, 0x0947, 0x0907, 0x0926, 0x0927, 0x0907, 0x0907, 0x0907, 0x08e6, 0x00e6, 0x00e6, 0x00e6, 0x4acd, 0x4acd, 0x4b0e, 0x532e, 0x532e, 0x532f, 0x5b4f, 0x5b70, 0x6bd0, 0x8451, 0x9515, 0x8c92, 0x840f, 0x8c50, 0x83d0, 0x9431, 0xa4d1, 0xe6b5, 0xffb8, 0xfed5, 0xfe11, 0xfd4c, 0xf466, 0xf464, 0xf463, 0xf443, 0xf424, 0xf423, 0xfc23, 0xfc04, 0xfc05, 0xfc25, 0xfc43, 0xfc63, 0xf444, 0xf463, 0xfc84, 0xfc84, 0xfc84, 0xecc2, 0xf5e5, 0xeeac, 0x83c7, 0x7bcc, 0x8c0f, 0x738d, 0x424a, 0x1987, 0x1166, 0x0927, 0x0907, 0x0906, 0x0906, 0x0927, 0x0927, 0x0907, 0x0907, 0x08e6, 0x00e6, 0x08e6, 0x530e, 0x4aed, 0x530e, 0x4aed, 0x42ac, 0x4acd, 0x4aed, 0x5b6f, 0x73f1, 0x94b3, 0xa556, 0x9cd3, 0x9cf2, 0x9c91, 0x83f0, 0x9cb2, 0xc5b5, 0xef39, 0xfffb, 0xffb9, 0xfe93, 0xfdad, 0xf4c7, 0xf464, 0xf443, 0xf403, 0xfc25, 0xf423, 0xf423, 0xf423, 0xf444, 0xf464, 0xf463, 0xfc83, 0xf485, 0xf4a3, 0xfca5, 0xfc63, 0xf4a2, 0xf584, 0xf68a, 0x93e7, 0x41c4, 0x4a07, 0x5a89, 0x5289, 0x424a, 0x21c9, 0x0947, 0x0927, 0x08e7, 0x0906, 0x0906, 0x0907, 0x0927, 0x0907, 0x0907, 0x0907, 0x00e6, 0x00e6, 0x530e, 0x4aed, 0x4acd, 0x3a4b, 0x320a, 0x428c, 0x4acd, 0x530e, 0x63b0, 0x8431, 0x8c93, 0xad56, 0xbe16, 0xad53, 0xa4d2, 0xc5d6, 0xef59, 0xef9a, 0xd718, 0xf757, 0xff14, 0xf60c, 0xed06, 0xf483, 0xfc84, 0xfc24, 0xfc25, 0xf444, 0xf463, 0xf483, 0xf483, 0xf483, 0xf4a2, 0xfc84, 0xfc85, 0xf4c4, 0xf463, 0xfc63, 0xfd84, 0xfec8, 0x9c25, 0x41a5, 0x4a08, 0x5248, 0x4a08, 0x2965, 0x1926, 0x1128, 0x0927, 0x0107, 0x00e8, 0x08e7, 0x08e6, 0x0907, 0x0907, 0x0907, 0x08e6, 0x00e6, 0x00c6, 0x00c6, 0x4b0e, 0x428c, 0x3a6c, 0x29ea, 0x29c9, 0x322b, 0x3a4b, 0x3a6c, 0x530e, 0x73b0, 0x8cb4, 0xb5f7, 0xb5d6, 0xad53, 0xb5b4, 0xef3a, 0xffbc, 0xde98, 0xb533, 0xb52f, 0xe671, 0xff0f, 0xf607, 0xf502, 0xf461, 0xfc42, 0xfc44, 0xfc64, 0xfc43, 0xfc84, 0xfc63, 0xfc84, 0xf463, 0xf484, 0xf484, 0xfca1, 0xf522, 0xfe46, 0xf68a, 0xf752, 0xb530, 0x49c6, 0x5a08, 0x5229, 0x29c9, 0x1968, 0x1148, 0x0928, 0x0908, 0x0107, 0x0107, 0x00e7, 0x00e6, 0x00e6, 0x08e6, 0x08e6, 0x08e6, 0x00e6, 0x00c6, 0x00c6, 0x4acd, 0x3a8c, 0x322b, 0x21c9, 0x29ea, 0x322b, 0x322b, 0x3a8c, 0x532f, 0x73f1, 0x8cb3, 0x94f3, 0x9d13, 0xad94, 0xe73a, 0xef5a, 0xce56, 0xc5d5, 0xacd1, 0x8bec, 0xc590, 0xc54c, 0xe60c, 0xfe6a, 0xfdc6, 0xf543, 0xf4c3, 0xec82, 0xec82, 0xf4a2, 0xec61, 0xec82, 0xeca2, 0xf4e3, 0xece4, 0xfde7, 0xfe8b, 0xcd6a, 0x7b45, 0x8beb, 0xd657, 0xad12, 0x49e6, 0x39a6, 0x1968, 0x1947, 0x1128, 0x0907, 0x0108, 0x0107, 0x00e7, 0x00e6, 0x00c6, 0x00e6, 0x08e6, 0x08e6, 0x00e6, 0x00e6, 0x00c6, 0x00c6, 0x3a6c, 0x322b, 0x29c9, 0x2188, 0x29ea, 0x322b, 0x320a, 0x322b, 0x42ad, 0x634e, 0x73f0, 0x7c30, 0x9d54, 0xdefa, 0xe73a, 0xc636, 0x9cf1, 0x9c8f, 0x8c0d, 0xa4f1, 0xacf1, 0x5245, 0x62c4, 0xa447, 0xde2b, 0xee6a, 0xfe47, 0xfe06, 0xfe06, 0xf5c5, 0xf5c5, 0xfe27, 0xfe47, 0xfe68, 0xfeca, 0xd5ec, 0x8b86, 0x5a24, 0x41c5, 0x4a07, 0x736c, 0xa533, 0x7bef, 0x2145, 0x1127, 0x1127, 0x0927, 0x00e7, 0x0107, 0x0107, 0x00e7, 0x00e6, 0x00c6, 0x00c6, 0x08e6, 0x08e6, 0x00e6, 0x00c6, 0x00c6, 0x00c6, 0x322b, 0x29c9, 0x21a9, 0x1988, 0x29c9, 0x29ea, 0x29c9, 0x21a9, 0x29ea, 0x4aac, 0x638f, 0x8492, 0xb5d7, 0xbe37, 0xa554, 0x9d13, 0x8c70, 0x83ed, 0x83ec, 0x83ee, 0x630b, 0x4a68, 0x41e6, 0x5aa6, 0x83a7, 0x7b63, 0xde4b, 0xc547, 0xc546, 0xeeac, 0xd5a8, 0xc527, 0xac85, 0x8be3, 0xc5aa, 0xa4ee, 0x4a05, 0x4a07, 0x5249, 0x5269, 0x39e7, 0x3a28, 0x6bb0, 0x4acd, 0x1968, 0x0907, 0x08e7, 0x00e7, 0x0107, 0x0107, 0x00e6, 0x00c6, 0x00c6, 0x00c6, 0x08e6, 0x08e6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x29ea, 0x2188, 0x2188, 0x2188, 0x21c9, 0x21a9, 0x2188, 0x2188, 0x29c9, 0x4aad, 0x63b0, 0x7c52, 0x7c52, 0x6bcf, 0x638e, 0x6b8e, 0x6b8f, 0x73af, 0x634d, 0x4228, 0x4227, 0x4228, 0x5269, 0x7b8d, 0x6288, 0x6265, 0xb531, 0x49e4, 0x49e4, 0xbd52, 0x7309, 0x41a4, 0x41c5, 0x39a6, 0x6b2c, 0xad12, 0x732b, 0x5248, 0x4a27, 0x39c6, 0x29a6, 0x1966, 0x1148, 0x324c, 0x2a0a, 0x0927, 0x00e6, 0x0107, 0x00e7, 0x00e7, 0x00e6, 0x00c6, 0x00c6, 0x00c6, 0x08e6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x29ea, 0x2188, 0x1988, 0x2188, 0x2188, 0x1968, 0x1147, 0x1968, 0x21a9, 0x320b, 0x4aae, 0x4acd, 0x426b, 0x3209, 0x31e9, 0x424b, 0x52cd, 0x4aae, 0x29aa, 0x322a, 0x21a6, 0x29a6, 0x4208, 0x6b0c, 0x5208, 0x7b2b, 0x942f, 0x4a05, 0x5226, 0xa48f, 0x730a, 0x5206, 0x5248, 0x5249, 0x5249, 0x8bed, 0x6b0a, 0x4a07, 0x3187, 0x2167, 0x1948, 0x1147, 0x0926, 0x0906, 0x1148, 0x1989, 0x0907, 0x00c7, 0x00c6, 0x00e6, 0x08e6, 0x00c5, 0x00a5, 0x00c6, 0x00c6, 0x00c6, 0x08c6, 0x00c6, 0x00c6, 0x00c6, 0x21a9, 0x1947, 0x1147, 0x1947, 0x1127, 0x1106, 0x1106, 0x1106, 0x1107, 0x1108, 0x1968, 0x2189, 0x1947, 0x08e6, 0x1106, 0x1968, 0x2169, 0x1128, 0x1189, 0x19a9, 0x1146, 0x1966, 0x31e9, 0x3a09, 0x3186, 0x5aeb, 0x5aaa, 0x41e7, 0x4a28, 0x7bae, 0x5269, 0x4a29, 0x4a29, 0x41e9, 0x31c8, 0x4a68, 0x4289, 0x31e8, 0x1967, 0x1128, 0x1128, 0x0927, 0x0907, 0x0906, 0x00e6, 0x0927, 0x1169, 0x0107, 0x00c6, 0x00c6, 0x00c6, 0x08c5, 0x08c5, 0x00a5, 0x00a6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x1968, 0x1127, 0x1106, 0x1106, 0x08e6, 0x08e6, 0x08e6, 0x08e6, 0x08c6, 0x08c6, 0x08c6, 0x1147, 0x1126, 0x08e6, 0x08e6, 0x0907, 0x08c7, 0x0907, 0x1188, 0x0126, 0x0907, 0x1168, 0x2a0a, 0x1967, 0x1946, 0x3a8a, 0x2166, 0x2187, 0x2987, 0x4aab, 0x29a7, 0x2186, 0x2187, 0x2187, 0x1967, 0x1988, 0x2a0a, 0x21c9, 0x11a8, 0x0927, 0x0907, 0x0907, 0x08e8, 0x08e8, 0x00e6, 0x00a6, 0x0907, 0x0948, 0x00e7, 0x00c6, 0x00a5, 0x08c5, 0x08c5, 0x00a5, 0x00a6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x1947, 0x1106, 0x1106, 0x08e6, 0x08c5, 0x08c5, 0x08e6, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x1126, 0x1126, 0x0906, 0x08e6, 0x08e6, 0x08e7, 0x00e6, 0x00c5, 0x00e6, 0x0908, 0x1149, 0x19a9, 0x0947, 0x1167, 0x21e9, 0x1147, 0x1967, 0x1146, 0x3229, 0x2187, 0x1146, 0x1166, 0x0967, 0x0946, 0x0928, 0x1168, 0x0947, 0x0967, 0x0106, 0x0907, 0x08e7, 0x08c8, 0x00c7, 0x00e6, 0x00e7, 0x00c6, 0x00e7, 0x0907, 0x08e6, 0x00c5, 0x08a4, 0x00a5, 0x00a6, 0x00a6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x1106, 0x08e6, 0x08e6, 0x08c5, 0x00c5, 0x08c5, 0x00c5, 0x08c5, 0x08c5, 0x00c5, 0x08c5, 0x08e5, 0x0905, 0x00e5, 0x00e5, 0x00c6, 0x00c6, 0x00e6, 0x00c7, 0x08e7, 0x08c8, 0x1128, 0x0906, 0x0926, 0x0927, 0x0927, 0x0907, 0x0907, 0x1107, 0x1948, 0x1127, 0x1127, 0x0927, 0x0927, 0x0927, 0x00e7, 0x0106, 0x00e6, 0x0906, 0x08e7, 0x08e8, 0x08c7, 0x08e6, 0x08c6, 0x00c6, 0x00c6, 0x00c7, 0x00c6, 0x00c6, 0x08e6, 0x08c5, 0x08a5, 0x00a5, 0x08a6, 0x08a6, 0x08a6, 0x08c6, 0x08a6, 0x08a6, 0x08a6, 0x08e6, 0x08e6, 0x08c5, 0x08e6, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x08e7, 0x08e7, 0x0907, 0x08e6, 0x08e6, 0x08e7, 0x08e6, 0x00e7, 0x00e7, 0x0907, 0x08e7, 0x00e7, 0x0107, 0x0907, 0x0907, 0x0907, 0x08e7, 0x08e7, 0x08e7, 0x08e7, 0x08e7, 0x08e7, 0x00c6, 0x00c6, 0x00c6, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08e6, 0x08c5, 0x08e6, 0x08e6, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00c6, 0x00c6, 0x00c6, 0x00c6, 0x08c6, 0x00c6, 0x08c6, 0x08c6, 0x00c6, 0x00c6, 0x08c6, 0x08e6, 0x08e6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x00c6, 0x00c6, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08e6, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00a6, 0x00a6, 0x00a6, 0x00a6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x00c6, 0x00c6, 0x00c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x00a6, 0x00a6, 0x00a6, 0x00a6, 0x08c6, 0x08c6, 0x08c6, 0x00c6, 0x00a5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x1106, 0x08c5, 0x08c5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00a6, 0x00a6, 0x00a6, 0x00a6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x00c6, 0x00a6, 0x00a6, 0x00c6, 0x00c6, 0x00a6, 0x00a6, 0x00a6, 0x00a6, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a6, 0x00a6, 0x00a6, 0x00a6, 0x08c6, 0x08c6, 0x00c6, 0x00a6, 0x00a5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08e6, 0x00c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x08c6, 0x00a6, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a6, 0x08a5, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x08a6, 0x08a6, 0x08a6, 0x08a6, 0x08c6, 0x08c6, 0x00a6, 0x00a6, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x0084, 0x0084, 0x0084, 0x0084, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x08a4, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x00a5, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x00c5, 0x00c5, 0x00c5, 0x00c5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x08a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5, 0x08c5
};// 16
static const tPicture sunny = { image_data_sunny, 60, 50, 3000, 16, RLE_no};

#endif
