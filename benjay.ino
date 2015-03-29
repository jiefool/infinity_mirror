#include <Adafruit_NeoPixel.h>

#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(64, PIN, NEO_GRB + NEO_KHZ800);


uint32_t face_1[] = {0xFFFAFF, 0xFCFFF1, 0xFF0006, 0xF20401, 0xF20401, 0xFF0006, 0xFCFFF1, 0xFFFAFF, 0xF2FFF6, 0xFE0100, 0xFFFBFF, 0xFFFBFF, 0xFFFBFF, 0xFFFBFF, 0xFE0100, 0xF2FFF6, 0xFF020A, 0xFEFAF7, 0xFCFFFA, 0xFEFEFC, 0xFEFEFC, 0xFCFFFA, 0xFEFAF7, 0xFF020A, 0xFB0000, 0xF9FFFF, 0xFE0103, 0xFCFEFF, 0xFCFEFF, 0xFE0103, 0xF9FFFF, 0xFB0000, 0xFC0905, 0xFFF6F8, 0xFFFBF7, 0xF8FFF7, 0xF8FFF7, 0xFFFBF7, 0xFFF6F8, 0xFC0905, 0xFA0000, 0xFFFDFF, 0xFEFFF6, 0xFE0000, 0xFE0000, 0xFEFFF6, 0xFFFDFF, 0xFA0000, 0xFCFFFA, 0xF70000, 0xFFFEFF, 0xFAFEFF, 0xFAFEFF, 0xFFFEFF, 0xF70000, 0xFCFFFA, 0xFFFBF7, 0xF4FFFF, 0xFE0007, 0xFF0100, 0xFF0100, 0xFE0007, 0xF4FFFF, 0xFFFBF7};
uint32_t face_2[] = {0x000401, 0x000000, 0x08FD02, 0x00FF0B, 0x00FF0B, 0x08FD02, 0x000000, 0x000401, 0x000200, 0x0BFF0D, 0x030005, 0x000700, 0x000700, 0x030005, 0x0BFF0D, 0x000200, 0x06FB06, 0x000107, 0x070000, 0x000100, 0x000100, 0x070000, 0x000107, 0x06FB06, 0x00FF00, 0x000300, 0x06FC01, 0x090007, 0x090007, 0x06FC01, 0x000300, 0x00FF00, 0x00FF07, 0x000602, 0x000507, 0x000202, 0x000202, 0x000507, 0x000602, 0x00FF07, 0x06FD00, 0x0B0000, 0x020200, 0x06FF0B, 0x06FF0B, 0x020200, 0x0B0000, 0x06FD00, 0x020005, 0x00FF03, 0x040000, 0x000004, 0x000004, 0x040000, 0x00FF03, 0x020005, 0x030004, 0x000002, 0x05FD06, 0x00FF00, 0x00FF00, 0x05FD06, 0x000002, 0x030004};
uint32_t green_swirl[] = {0x0C0100, 0x00FF00, 0x06FF11, 0x02F800, 0x07FF00, 0x01FF00, 0x000007, 0x000002, 0x040007, 0x010010, 0x000600, 0x000D03, 0x030000, 0x060010, 0x00FF08, 0x030300, 0x050800, 0x06FF0A, 0x0BF516, 0x00FF00, 0x00FF00, 0x00050E, 0x000010, 0x00FF05, 0x00FB00, 0x000202, 0x050600, 0x010013, 0x000100, 0x00FF02, 0x060000, 0x02FC07, 0x00FF01, 0x0E0202, 0x08F400, 0x07FE00, 0x110000, 0x00FF00, 0x080000, 0x00FF06, 0x00FF0B, 0x040007, 0x000600, 0x06FF13, 0x00FF06, 0x00020B, 0x180008, 0x00FF00, 0x040002, 0x03FF00, 0x0F000B, 0x060004, 0x00070D, 0x030004, 0x06FF00, 0x000300, 0x0B0010, 0x000500, 0x00FF05, 0x08FF00, 0x00FF00, 0x00FD13, 0x040002, 0x04030B};
uint32_t red_swirl[] = {0x000502, 0xFF000E, 0xFA0000, 0xFC0108, 0xFB0000, 0xFB000A, 0x030303, 0x030000, 0x000202, 0x0B0000, 0x000502, 0x000800, 0x010700, 0x050100, 0xF80007, 0x080000, 0x0A0000, 0xF90004, 0xFC0A00, 0xFB0000, 0xF90017, 0x010200, 0x060000, 0xF3060C, 0xFB0103, 0x010801, 0x00030C, 0x010508, 0x0E0004, 0xF70800, 0x0B0600, 0xFC0000, 0xFD0400, 0x0B0007, 0xFF050C, 0xF10000, 0x070802, 0xFF0305, 0x070013, 0xF40000, 0xFF0300, 0x000100, 0x0D0000, 0xFE0500, 0xF50000, 0x000200, 0x000209, 0xFF080C, 0x000507, 0xF4000B, 0x000400, 0x000500, 0x000200, 0x08000B, 0xFC0100, 0x000200, 0x000500, 0x08000E, 0xFD0014, 0xFF0500, 0xF30306, 0xFF0200, 0x080100, 0x000007};
uint32_t blue_swirl[] = {0x000502, 0xFF000E, 0xFA0000, 0xFC0108, 0xFB0000, 0xFB000A, 0x030303, 0x030000, 0x000202, 0x0B0000, 0x000502, 0x000800, 0x010700, 0x050100, 0xF80007, 0x080000, 0x0A0000, 0xF90004, 0xFC0A00, 0xFB0000, 0xF90017, 0x010200, 0x060000, 0xF3060C, 0xFB0103, 0x010801, 0x00030C, 0x010508, 0x0E0004, 0xF70800, 0x0B0600, 0xFC0000, 0xFD0400, 0x0B0007, 0xFF050C, 0xF10000, 0x070802, 0xFF0305, 0x070013, 0xF40000, 0xFF0300, 0x000100, 0x0D0000, 0xFE0500, 0xF50000, 0x000200, 0x000209, 0xFF080C, 0x000507, 0xF4000B, 0x000400, 0x000500, 0x000200, 0x08000B, 0xFC0100, 0x000200, 0x000500, 0x08000E, 0xFD0014, 0xFF0500, 0xF30306, 0xFF0200, 0x080100, 0x000007};
uint32_t gwenilly[] = {0xF80001, 0xFC0000, 0xFF0109, 0xF90000, 0xFF0506, 0xFF0006, 0xFD0000, 0xF80300, 0xF50D0B, 0xF60000, 0xFC0400, 0xFF0404, 0xEA0700, 0xF90000, 0xF50200, 0xFF0011, 0xFD0006, 0xFE0607, 0xEB0007, 0xFD0002, 0xFF0008, 0xFFEEBB, 0xFFDAAA, 0xF7EAB6, 0xF0EBA7, 0xFFE1AD, 0xFFEEBC, 0xFFE7BE, 0xE9E6B9, 0xFFE4BD, 0xFFEEC5, 0xF6ECBB, 0xFFE7C7, 0xFFFCFF, 0x44A035, 0xFDEBBB, 0xFBEDBC, 0x41A73A, 0xFCFAFF, 0xFFE2C4, 0xF0E1B6, 0xF9EDC7, 0xFCEFBA, 0xFFDFC3, 0xFCECC8, 0xFFECB7, 0xF7EFC0, 0xFFE4B7, 0xFFE8C2, 0xFFE5C0, 0xFFE3B5, 0xFF55DC, 0xFC5DDD, 0xFDDEB0, 0xF6EBBE, 0xFFE4BD, 0xFFE5BE, 0xF3E9AB, 0xFFE3C0, 0xFAEBCA, 0xFCDDC1, 0xF8E9C2, 0xFFEFBA, 0xFDE0C2};
void setup() {
  Serial.begin(9600);  
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
//  for(int i = 0;i<64;i++){
//      strip.setPixelColor(i, pixel_color);
//      strip.show();
//      delay(20);
//      
//  }
//  for(int i = 0;i<64;i++){
//      strip.setPixelColor(i, 0x000000);
//      strip.show();
//      delay(20);
//  }
  

//setColor(face_1);
//strip.show();
//delay(1000);
//setColor(face_2);
//strip.show();
//delay(1000);
//setColor(blue);
//strip.show();
//delay(1000);
//colorAnimation(red_swirl);
//colorAnimation(green_swirl);
//colorAnimation(blue_swirl);

//runColor(0xff0000);
//runColor(0x00ff00);
//runColor(0x0000ff);
colorAnimation(gwenilly);
strip.show();
  
}

void colorAnimation(uint32_t pixels[]){
  for(int i=0;i<64;i++){    
      strip.setPixelColor(i, pixels[i]);          
    }
  
}


void runColor(uint32_t color){
  for(int i=0;i<64;i++){
    strip.setPixelColor(i, color);
    strip.show();
    delay(50);
  }
}



void setColor(uint32_t pixel_color[]){
  for(int i=0;i<64;i++){      
      strip.setPixelColor(i, pixel_color[i]);          
  }
}
