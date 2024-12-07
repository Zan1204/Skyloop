#include <FastLED.h> //include library for led strips
#define NUM_LEDS 90 //required setup
#define DATA_PIN 33 
#define BRIGHTNESS 100 //variable for brightness
CRGB leds[NUM_LEDS];

int buzz = 4; //Digital pin # for other components
int lazer1 = 18;
int lazer2 = 19;
int lazer3 = 21;

void setup() {
  Serial.begin(9600); //initiate serial monitor 
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS); //defining led strip model
  FastLED.setBrightness(BRIGHTNESS);
  pinMode(lazer1, INPUT); //creating an input value from the lazer sensor
  pinMode(lazer2, INPUT);
  pinMode(lazer3, INPUT);
  pinMode(buzz, OUTPUT);
  //changeColour(CRGB::Yellow);
}

void loop() { 
  int detect1 = digitalRead(lazer1); //variables for detection of drone flying through the loop
  int detect2 = digitalRead(lazer2); //variables for all 3 sensors
  int detect3 = digitalRead(lazer3); //the third lazer has been given a variable for detection
  
    changeColour(CRGB::Blue); //colour remains blue
    FastLED.show();
    digitalWrite(buzz, HIGH);
    delay(1);    
    Serial.print(detect1);
    Serial.print(" ");
    Serial.print(detect2);
    Serial.print(" ");
    Serial.print(detect3);
    Serial.println(" ");

    if(detect1 ==0 || detect2 ==0 || detect3 ==0)
    {
    changeColour(CRGB::Green); //colour remains blue
    FastLED.show();
    digitalWrite(buzz, LOW);
    delay(2000);
    }
   
}
void changeColour(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
  }
}
