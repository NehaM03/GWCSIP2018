#include <Servo.h>

Servo servoLeft;
Servo servoRight;

int leftWhisker = 7;
int rightWhisker = 5;

int PIEZOPIN = 13;

int note_A4 = 440;
int note_As4 = 466; int note_Bb4 = note_As4;
int note_B4 = 494;
int note_C5 = 523;
int note_Cs5 = 544; int note_Db5 = note_Cs5;
int note_D5 = 587;
int note_Ds5 = 622; int note_Eb5 = note_Ds5;
int note_E5 = 659;
int note_F5 = 698;
int note_Fs5 = 740; int note_Gb5 = note_Fs5;
int note_G5 = 784;
int note_Gs5 = 830; int note_Ab5 = note_Gs5;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  //pinMode(13, OUTPUT);

  servoLeft.attach(13);
  servoRight.attach(12);
  pinMode(PIEZOPIN, OUTPUT);

  Serial.begin(9600);

  pinMode(leftWhisker, INPUT);
  pinMode(rightWhisker, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  a();
  piezoGreeting();
  
  servoLeft.writeMicroseconds(2000);
  servoRight.writeMicroseconds(1000);

  int leftWhiskerValue = digitalRead(leftWhisker);
  int rightWhiskerValue = digitalRead(rightWhisker);

  Serial.print("Left :");
  Serial.print(leftWhiskerValue);
  Serial.print("Right :");
  Serial.print(rightWhiskerValue);
  Serial.println("0");
  fts(leftWhiskerValue,rightWhiskerValue);

}
void fts(int leftWhiskerValue,int rightWhiskerValue) 
{
 /* if(leftWhiskerValue == 1 && rightWhiskerValue == 1){
    Serial.println("Left and Right pressed!");
    tone(PIEZOPIN, note_A4, 200);
    delay(1000);
  }*/
  if (leftWhiskerValue == 0){
    Serial.print("Left pressed!");
    //tone(PIEZOPIN, note_D5, 200);
    //delay(1000);
  }else if (rightWhiskerValue == 0){
    Serial.print("Right pressed!");
    //tone(PIEZOPIN, note_B4, 200);
    //delay(1000);
  }else{
    Serial.print("No whiskers pressed!");
  }
  delay(100);
}



void piezoGreeting(){
  for (int x = 0; x<1; x++){
    tone(PIEZOPIN, note_C5, 200);
    delay(500);
    tone(PIEZOPIN, note_E5, 200);
    delay(500);
    tone(PIEZOPIN, note_G5, 200);
    delay(500);
  }
}

void a(){
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1500);
  digitalWrite(13,HIGH);
  delay(6000);
  digitalWrite(13, LOW);
  delay(5000);
}

