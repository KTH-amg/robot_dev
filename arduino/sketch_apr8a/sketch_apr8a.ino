int digits[10][7]
{
  {1, 1, 1, 1, 1, 1, 0}, // digit 0
  {0, 1, 1, 0, 0, 0, 0}, // digit 1
  {1, 1, 0, 1, 1, 0, 1}, // digit 2
  {1, 1, 1, 1, 0, 0, 1}, // digit 3
  {0, 1, 1, 0, 0, 1, 1}, // digit 4
  {1, 0, 1, 1, 0, 1, 1}, // digit 5
  {1, 0, 1, 1, 1, 1, 1}, // digit 6
  {1, 1, 1, 0, 0, 0, 0}, // digit 7
  {1, 1, 1, 1, 1, 1, 1}, // digit 8
  {1, 1, 1, 0, 0, 1, 1} // digit 9
};

const int BUTTON_PIN = 13;
int clicks = 0;
int prevClicks = -1;

void displayDigit(int d)
{
  if (digits[d][0]==1) digitalWrite(2, HIGH); else digitalWrite(2, LOW);
  if (digits[d][1]==1) digitalWrite(3, HIGH); else digitalWrite(3, LOW);
  if (digits[d][2]==1) digitalWrite(4, HIGH); else digitalWrite(4, LOW);
  if (digits[d][3]==1) digitalWrite(5, HIGH); else digitalWrite(5, LOW);
  if (digits[d][4]==1) digitalWrite(6, HIGH); else digitalWrite(6, LOW);
  if (digits[d][5]==1) digitalWrite(7, HIGH); else digitalWrite(7, LOW);
  if (digits[d][6]==1) digitalWrite(8, HIGH); else digitalWrite(8, LOW);
}

int buttonPress()
{
  int press;
  int buttonState;
  static int prevButtonState = LOW;

  buttonState = digitalRead(BUTTON_PIN);
  press = (buttonState == HIGH && prevButtonState == LOW);

  prevButtonState = buttonState;
  return press;
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // A
  pinMode(3, OUTPUT); // B
  pinMode(4, OUTPUT); // C
  pinMode(5, OUTPUT); // D
  pinMode(6, OUTPUT); // E
  pinMode(7, OUTPUT); // F
  pinMode(8, OUTPUT); // G
  pinMode(BUTTON_PIN, INPUT);

  Serial.begin(9600);
  displayDigit(clicks);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (buttonPress())
  {
    /*
    clicks++;
    if (clicks > 9)
    {
      clicks = 0;
    }
    */
    if (prevClicks == (clicks - 1))
    {
      prevClicks = clicks++;
      if (clicks > 9)
      {
        prevClicks = --clicks;
        clicks--;
      }
    }
    else if (prevClicks == (clicks + 1))
    {
      prevClicks = clicks--;
      if (clicks < 0)
      {
        prevClicks = ++clicks;
        clicks++;
      }
    }
    displayDigit(clicks);
    Serial.print(clicks);
    Serial.print(", ");
    Serial.println(prevClicks);
  }
}
