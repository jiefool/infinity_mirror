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
  for(int i=0;i<arr_len(anim_gif);i++){
    for(int j=0;j<64;j++){
      strip.setPixelColor(j, anim_gif[i][j]);      
    }
    strip.show();
    delay(1000);
  }  
}



