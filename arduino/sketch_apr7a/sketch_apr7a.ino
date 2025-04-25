const int SOUND_PIN = A0;
const int ledPins[8] = {10, 9, 8, 7, 6, 5, 4, 3};
int soundValue = 0;
bool cali = false;

int max = 50;
int min = 50;

unsigned long prev = 0;
const long interval = 500;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 8; i++) 
  {
    pinMode(ledPins[i], OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  soundValue = analogRead(SOUND_PIN);

  if (!cali)
  {
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(ledPins[i], HIGH);
    }
    delay();

    if (max < soundValue)
    {
      max = soundValue;
    }
    if (min > soundValue)
    {
      min = soundValue;
    }
    delay(200);

    for (int i = 0; i < 8; i++)
    {
      digitalWrite(ledPins[i], LOW);
    }
    cali = true;
  }

  int level = map(soundValue, min, max, 0, 9);

  unsigned long cur = millis();
  if (cur - prev >= interval)
  {
    prev = cur;

    for (int i = 0; i < 8; i++)
    {
      if (i < level)
      {
        digitalWrite(ledPins[i], HIGH);
      }
      else
      {
        digitalWrite(ledPins[i], LOW);
      }
    }
  }
  Serial.print(max);
  Serial.print(", ");
  Serial.println(min);
}
