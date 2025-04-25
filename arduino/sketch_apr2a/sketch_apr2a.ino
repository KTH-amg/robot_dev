#include <Servo.h>

Servo servo;
unsigned long startTime;
unsigned long elapsedTime;
int baseDelay = 260;  // 초기 딜레이 값
int minDelay = 50;    // 최소 딜레이 값 (최소한 얼마나 빨리 반응할지)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(9);
  servo.write(0);
  startTime = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  elapsedTime = millis() - startTime;
  //int pos = map(light, 0, 50, 10, 30);

  int delayTime = baseDelay - (elapsedTime / 450);
  delayTime = max(delayTime, minDelay);

  if (light < 20)
  {
    //delay(1);
    servo.write(70);
    delay(delayTime);
  }
  else
  {
    servo.write(0);
  }

  //delay(5);

  Serial.print(light);
  Serial.print(", ");
  Serial.println(delayTime);
}  