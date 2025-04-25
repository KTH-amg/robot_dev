int R = 7;
int G = 5;
int B = 3;

int sw1 = 12;
int sw2 = 10;
int sw3 = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sw1) == LOW)
    digitalWrite(R, HIGH);
  else
    digitalWrite(R, LOW);

  if (digitalRead(sw2) == LOW)
    digitalWrite(G, HIGH);
  else
    digitalWrite(G, LOW);

  if (digitalRead(sw3) == LOW)
    digitalWrite(B, HIGH);
  else
    digitalWrite(B, LOW);
}
