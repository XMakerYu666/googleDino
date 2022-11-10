
#include <Servo.h>

Servo servo_13;

void setup(){
  Serial.begin(9600);
  servo_13.attach(13);
  servo_13.write(90);
  delay(1000);
}

void loop(){
  Serial.println(analogRead(A0));
  if (analogRead(A0) >= 200) {
    servo_13.write(60);
    delay(100);

  }
  servo_13.write(90);
  delay(1);

}
