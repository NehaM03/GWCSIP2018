#include <Servo.h>

Servo servoLeft;
Servo servoRight;

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
  pinMode(PIEZOPIN, OUTPUT);
  servoLeft.attach(13);
  servoRight.attach(12);
  
  
}

void dancemove1() {
  // put your main code here, to run repeatedly:
 //servoLeft.writeMicroseconds(1000);
 //delay(1);
 servoLeft.writeMicroseconds(5000);
 delay(1000);
 servoRight.writeMicroseconds(5000);
 delay(1000);
 
 servoLeft.writeMicroseconds(5000);
 delay(2000);

 for (int x = 1; x < 2; x +=1){
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(50);

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(50);
 }

 servoLeft.writeMicroseconds(15000);
 delay(10000);
}

void stopMoving(){
 servoLeft.writeMicroseconds(1500);
 delay(1000);
}

void piezoGreeting(){
  for (int x = 0; x<5; x++){
    tone(PIEZOPIN, note_C5, 200);
    delay(500);
    tone(PIEZOPIN, note_E5, 200);
    delay(500);
    tone(PIEZOPIN, note_G5, 200);
    delay(500);
  }
}

void a(){
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(1500);
  digitalWrite(12,HIGH);
  delay(6000);
  digitalWrite(12, LOW);
  delay(5000);
}

void d(){
  digitalWrite(12, HIGH);
  delay(6000);
  digitalWrite(12, LOW);
  delay(1500);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(1500);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(5000);
}

void dad() {
  d();
  a();
  d();
}


void loop() {
  piezoGreeting();
  dad();

  dancemove1();
  stopMoving();
}


