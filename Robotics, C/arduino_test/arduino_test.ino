void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  dad();
}

void a(){
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8,HIGH);
  delay(450);
  digitalWrite(8, LOW);
  delay(500);
}

void b(){
  digitalWrite(8, HIGH);
  delay(450);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(500);
}

void c(){
  digitalWrite(8, HIGH);
  delay(450);
  digitalWrite(8,LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8,LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(450);
  digitalWrite(8,LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(500);
}

void d(){
  digitalWrite(8, HIGH);
  delay(450);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(500);
}

void e(){
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(200);
}

void f(){
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(450);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
  delay(200);
}

void g(){
  
}

void dad() {
  d();
  a();
  d();
}


