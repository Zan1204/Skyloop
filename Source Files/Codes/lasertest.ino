int lazer = 18;

void setup() {
Serial.begin(9600); //initiate serial monitor 
  pinMode(lazer, INPUT); //creating an input value from the lazer sensor
}

void loop() {
   int detect = digitalRead(lazer); //variables for detection of drone flying through the loop
    Serial.println(detect); //reported on the serial monitor
    delay(100);

}
