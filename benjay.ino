#include <Adafruit_NeoPixel.h>
#include "anim_gif.h"

#define PIN 6
#define arr_len( x )  ( sizeof( x ) / sizeof( *x ) )
Adafruit_NeoPixel strip = Adafruit_NeoPixel(64, PIN, NEO_GRB + NEO_KHZ800);



void setup() {  
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {  
  for(int i=0;i<30;i++){
    switch(i){
      case 0: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_0[j]);} break;
      case 1: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_1[j]);} break;
      case 2: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_2[j]);} break;
      case 3: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_3[j]);} break;
      case 4: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_4[j]);} break;
      case 5: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_5[j]);} break;
      case 6: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_6[j]);} break;
      case 7: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_7[j]);} break;
      case 8: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_8[j]);} break;
      case 9: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_9[j]);} break;
      case 10: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_10[j]);} break;
      case 11: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_11[j]);} break;
      case 12: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_12[j]);} break;
      case 13: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_13[j]);} break;
      case 14: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_14[j]);} break;
      case 15: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_15[j]);} break;
      case 16: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_16[j]);} break;
      case 17: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_17[j]);} break;
      case 18: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_18[j]);} break;
      case 19: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_19[j]);} break;
      case 20: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_20[j]);} break;
      case 21: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_21[j]);} break;
      case 22: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_22[j]);} break;
      case 23: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_23[j]);} break;
      case 24: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_24[j]);} break;
      case 25: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_25[j]);} break;
      case 26: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_26[j]);} break;
      case 27: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_27[j]);} break;
      case 28: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_28[j]);} break;
      case 29: for(int j=0;j<64;j++){ strip.setPixelColor(j, anim_gif_29[j]);} break;

    }   
    strip.show();
    delay(100);
  }
}

