int whisker1 = 7;
int whisker2 = 5;
int LED = 12;
int piezo = 13;

void setup() {
  // put your setup code here, to run once:

  pinMode(whisker1, OUTPUT);
  pinMode(whisker2, OUTPUT);
  pinMode(LED, INPUT);
  pinMode(piezo, INPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED, HIGH);
  delay(500);
  tone(piezo, 600);

  if(digitalRead(whisker1)){
    Serial.println("Here");
  }

}
