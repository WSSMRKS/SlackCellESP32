#include <U8g2lib.h>
#include <Wire.h>

// Init for Heltec Wifi Kit 32 (SSD1306, I2C)
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0);


// 'settings-3110', 16x16px
const unsigned char epd_bitmap_settings_3110 [] PROGMEM = {
	0x3f, 0xa7, 0xc3, 0xf9, 0x19, 0xcb, 0xec, 0xee, 0xe6, 0xec, 0xc9, 0x19, 0xf9, 0xc3, 0x87, 0x3f, 
	0xfc, 0xe9, 0xc3, 0x9f, 0x98, 0x93, 0x37, 0x77, 0x77, 0x37, 0x93, 0x98, 0x9f, 0xc3, 0xe1, 0xfc
};
// 'Sd-Card--Streamline-Ultimate', 16x16px
const unsigned char epd_bitmap_Sd_Card__Streamline_Ultimate [] PROGMEM = {
	0xff, 0xff, 0x5e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfb, 0xf7, 0xff, 0xff, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x77, 0x77, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff
};
// 'Sd-Card-Remove--Streamline-Ultimate', 16x16px
const unsigned char epd_bitmap_Sd_Card_Remove__Streamline_Ultimate [] PROGMEM = {
	0x41, 0x1e, 0xfe, 0xfe, 0xf6, 0xfe, 0xfe, 0xf6, 0xfe, 0xff, 0x7f, 0x7f, 0x67, 0xff, 0xff, 0xff, 
	0x80, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xe3, 0x9f, 0xff, 0x6b, 0x77, 0x6b, 0xfe, 0xbe, 0xe3
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 144)
const int epd_bitmap_allArray_LEN = 3;
const unsigned char* epd_bitmap_allArray[3] = {
	epd_bitmap_Sd_Card_Remove__Streamline_Ultimate,
	epd_bitmap_Sd_Card__Streamline_Ultimate,
	epd_bitmap_settings_3110
};


void setup() {
  u8g2.begin();
}

void loop() {
  u8g2.clearBuffer();

  // Draw icons by index
  u8g2.drawXBMP(0, 0, 16, 16, epd_bitmap_allArray[0]); // No SD
  u8g2.drawXBMP(20, 0, 16, 16, epd_bitmap_allArray[1]); // SD present
  u8g2.drawXBMP(40, 0, 16, 16, epd_bitmap_allArray[2]); // Settings

  u8g2.sendBuffer();
  delay(2000);
}


// Practical usage (dynamic icons)

// Since you already made an allArray, you can select dynamically.
// Example: show SD card present / not present depending on a flag:

// bool sdPresent = false;

// void loop() {
//   u8g2.clearBuffer();

//   // Pick index based on state
//   int iconIndex = sdPresent ? 1 : 0;
//   u8g2.drawXBMP(0, 0, 16, 16, epd_bitmap_allArray[iconIndex]);

//   // Example text
//   u8g2.setFont(u8g2_font_ncenB08_tr);
//   u8g2.drawStr(20, 30, sdPresent ? "SD OK" : "No SD");

//   u8g2.sendBuffer();

//   delay(2000);
//   sdPresent = !sdPresent; // toggle for demo
// }