#include <Servo.h>
Servo S1;
int p;
int R;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
S1.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
p=analogRead(0);
R=map(p,0,1023,0,180);
S1.write(R);
Serial.println(" :Analog ");
Serial.print(p);
Serial.println(" :Servo ");
Serial.print(R);
delay(500);
}
