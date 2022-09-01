#include <Servo.h>
const int trigPin = 10;
const int echoPin = 11;
long duracion;
int distancia;
Servo myServo;
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(12);
}
void loop() {
  for(int i=15;i<=165;i++){  
  myServo.write(i);
  delay(10);
  distancia = calculardistancia();
  Serial.print(i); 
  Serial.print(","); 
  Serial.print(distancia);
  Serial.print(".");
  }
  for(int i=165;i>15;i--){  
  myServo.write(i);
  delay(10);
  distancia = calculardistancia();
  Serial.print(i);
  Serial.print(",");
  Serial.print(distancia);+
  Serial.print(".");
  }
}
int calculardistancia(){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duracion = pulseIn(echoPin, HIGH);
  distancia= duracion*0.034/2;
  return distancia;
}
