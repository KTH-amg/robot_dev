const int R_LED = 3;
const int G_LED = 5;
const int B_LED = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(R_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);
  pinMode(B_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0)
  {
    char input = Serial.read();
    Serial.println(input);

    if (input == 'r')
    {
      digitalWrite(R_LED, HIGH);
      Serial.println("red on");
    }
    else if (input == 'g')
    {
      digitalWrite(G_LED, HIGH);
      Serial.println("green on");
    }
    else if (input == 'b')
    {
      digitalWrite(B_LED, HIGH);
      Serial.println("blue on");
    }
    else if (input == 's')
    {
      digitalWrite(R_LED, LOW);
      digitalWrite(G_LED, LOW);
      digitalWrite(B_LED, LOW);
      Serial.println("all reset");
    }
    else {
      Serial.println("Wrong input!");
    }
  }
  /*
  for (int i = 0; i < 255; i++)
  {
    analogWrite(R_LED, i);
    analogWrite(G_LED, i);
    analogWrite(B_LED, i);
    delay(10);
  }
  */
}
