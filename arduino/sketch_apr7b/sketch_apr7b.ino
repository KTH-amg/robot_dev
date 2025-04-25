const int PIR_PIN = 2;
const int LED_PIN = 4;

unsigned long start_time = 0;
const long interval = 5000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool cur_state = digitalRead(PIR_PIN);
  //Serial.println(cur_state);

  if (cur_state)
  {
    start_time = millis();
  }

  if (millis() - start_time < interval)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }

  delay(50);
}
