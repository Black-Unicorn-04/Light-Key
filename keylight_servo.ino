//SERVO CODE

#include <Servo.h>

Servo doorlock;

int pos = 0;


void setup() {
  doorlock.attach(9);

}

void loop() {
  for (pos = 0; pos <= 180; pos +=1){
    doorlock.write(pos);
    delay(15);
  }

  for (pos = 180; pos >= 0; pos -=1){
    doorlock.write(pos);
    delay(15);
}

}
