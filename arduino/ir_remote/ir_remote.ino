#include <IRremote.h>

const int RED_PIN = 11;
const int GREEN_PIN = 10;
const int BLUE_PIN = 9;
unsigned long lastValue = 0;

IRrecv irrecv(12);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  irrecv.enableIRIn();
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  Serial.begin(9600);
}

void printRGB(int red, int green, int blue)
{
  analogWrite(RED_PIN, red);
  analogWrite(GREEN_PIN, green);
  analogWrite(BLUE_PIN, blue);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);

    if (results.value == 0xFFFFFFFF)
    {
      results.value = lastValue;
    }

    if (results.value == 0xFF30CF) {
      printRGB(255, 105, 180);
    }
    else if (results.value == 0xFF18E7)
    {
      printRGB(0, 255, 255);
    }
    else if (results.value == 0xFF7A85)
    {
      printRGB(0, 255, 0);
    }
    else
    {
      printRGB(0, 0, 0);
    }

    delay(30);
    lastValue = results.value;
    irrecv.resume();
  }
}
