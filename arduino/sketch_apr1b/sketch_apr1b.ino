//int max = 512;
//int min = 512;
const int LED_PIN = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  for (int i = 0; i < 255; i++)
  {
    analogWrite(LED_PIN, i);
    delay(10);
  }

  for (int i = 255; i > 0; i--)
  {
    analogWrite(LED_PIN, i);
    delay(5);
  }
  */
  int light = analogRead(A0);
  int output = map(light, 400, 800, 5, 250);

  if (output < 5)
  {
    output = 5;
  }

  if (output > 250)
  {
    output = 250;
  }

  Serial.print(light);
  Serial.print(", ");
  Serial.println(output);

  analogWrite(LED_PIN, output);
  /*
  if (max < light)
  {
    max = light;
  }

  if (min > light)
  {
    min = light;
  }

  Serial.print(max);
  Serial.print(", ");
  Serial.println(min);
  */
}
