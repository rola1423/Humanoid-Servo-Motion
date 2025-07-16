#include <Servo.h>  

Servo s1, s2, s3, s4; 

void setup() {

  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);

  for (int pos = 0; pos <= 180; pos += 5) {
    s1.write(pos);
    s2.write(pos);
    s3.write(pos);
    s4.write(pos);
    delay(20);
  }

  for (int pos = 180; pos >= 0; pos -= 5) {
    s1.write(pos);
    s2.write(pos);
    s3.write(pos);
    s4.write(pos);
    delay(20);
  }

  delay(2000); 
}

void loop() {
  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);

while (true);

}