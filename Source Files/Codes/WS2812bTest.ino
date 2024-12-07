#include <FastLED.h> //include library for led strips
#define NUM_LEDS 90 //required setup
#define DATA_PIN 33
#define BRIGHTNESS 75 //variable for brightness
CRGB leds[NUM_LEDS];

int buzz = 13; //Digital pin # for other components
int lazer = 4;
//int lazer2 = 13;
//int lazer3 = 15;

void setup() {
  Serial.begin(9600); //initiate serial monitor 
    //pinMode(buzz, OUTPUT); 
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS); //defining led strip model
  FastLED.setBrightness(BRIGHTNESS);
  //changeColour(CRGB::Yellow); //colour turn green
   // FastLED.show();
   // delay(3000);
}

void loop() { 
 
    changeColour(CRGB::Red); //colour turn green
    FastLED.show(); //makes sure that the led strip is on
    delay(100);
    changeColour(CRGB::Blue); //colour turn green
    FastLED.show(); //makes sure that the led strip is on
    delay(100);
}

void changeColour(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
  }
}