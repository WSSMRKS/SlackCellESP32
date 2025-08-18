#ifndef ICONS_H
# define ICONS_H

// 'icons8-x-16', 16x16px
const unsigned char epd_bitmap_icons8_x_16 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xe3, 0xc3, 0xc3, 0xc1, 0x83, 0xe0, 0x07, 0xf0, 0x0f, 0xf8, 0x1f, 
	0xf8, 0x1f, 0xf0, 0x0f, 0xe0, 0x07, 0xc1, 0x83, 0xc3, 0xc3, 0xe7, 0xe3, 0xff, 0xff, 0xff, 0xff
};
// 'icons8-micro-sd-16', 16x16px
const unsigned char epd_bitmap_icons8_micro_sd_16 [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xf7, 0xf7, 0xf5, 0x57, 0xf5, 0x57, 0xf7, 0xf7, 0xf7, 0xf7, 
	0xef, 0xf7, 0xef, 0xf7, 0xef, 0xf7, 0xef, 0xf7, 0xef, 0xf7, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 96)
const int epd_bitmap_allArray_LEN = 2;
const unsigned char* epd_bitmap_allArray[2] = {
	epd_bitmap_icons8_micro_sd_16,
	epd_bitmap_icons8_x_16
};



// WiFi symbol (basic)
const unsigned char icon_wifi [] PROGMEM = {
  0b00000000,
  0b00011000,
  0b00100100,
  0b01000010,
  0b00011000,
  0b00111100,
  0b00100100,
  0b00111100
};

// SD card (tiny)
const unsigned char icon_sd [] PROGMEM = {
  0b11111100,
  0b10000110,
  0b10111110,
  0b10111110,
  0b10111110,
  0b10000110,
  0b11111100,
  0b00000000
};

// Gear / settings
const unsigned char icon_settings [] PROGMEM = {
  0b00111100,
  0b01011010,
  0b11111111,
  0b11011011,
  0b11111111,
  0b01011010,
  0b00111100,
  0b00000000
};

// Checkmark
const unsigned char icon_check [] PROGMEM = {
  0b00000000,
  0b00000001,
  0b00000011,
  0b10000110,
  0b01001100,
  0b00111000,
  0b00010000,
  0b00000000
};

// Cross / X
const unsigned char icon_cross [] PROGMEM = {
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000,
  0b00011000,
  0b00100100,
  0b01000010,
  0b10000001
};

// Battery (full)
const unsigned char icon_battery [] PROGMEM = {
  0b01111110,
  0b11111111,
  0b10011001,
  0b10011001,
  0b10011001,
  0b10011001,
  0b11111111,
  0b01111110
};




// // 'settings-3110', 16x16px
// const unsigned char epd_bitmap_settings_3110 [] PROGMEM = {
// 	0x3f, 0xa7, 0xc3, 0xf9, 0x19, 0xcb, 0xec, 0xee, 0xe6, 0xec, 0xc9, 0x19, 0xf9, 0xc3, 0x87, 0x3f, 
// 	0xfc, 0xe9, 0xc3, 0x9f, 0x98, 0x93, 0x37, 0x77, 0x77, 0x37, 0x93, 0x98, 0x9f, 0xc3, 0xe1, 0xfc
// };
// // 'Sd-Card--Streamline-Ultimate', 16x16px
// const unsigned char epd_bitmap_Sd_Card__Streamline_Ultimate [] PROGMEM = {
// 	0xff, 0xff, 0x5e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfb, 0xf7, 0xff, 0xff, 
// 	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x77, 0x77, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff
// };
// // 'Sd-Card-Remove--Streamline-Ultimate', 16x16px
// const unsigned char epd_bitmap_Sd_Card_Remove__Streamline_Ultimate [] PROGMEM = {
// 	0x41, 0x1e, 0xfe, 0xfe, 0xf6, 0xfe, 0xfe, 0xf6, 0xfe, 0xff, 0x7f, 0x7f, 0x67, 0xff, 0xff, 0xff, 
// 	0x80, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xe3, 0x9f, 0xff, 0x6b, 0x77, 0x6b, 0xfe, 0xbe, 0xe3
// };

// // Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 144)
// const int epd_bitmap_allArray_LEN = 3;
// const unsigned char* epd_bitmap_allArray[3] = {
// 	epd_bitmap_Sd_Card_Remove__Streamline_Ultimate,
// 	epd_bitmap_Sd_Card__Streamline_Ultimate,
// 	epd_bitmap_settings_3110
// };

#endif