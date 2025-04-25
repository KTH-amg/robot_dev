int buzzer=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char i,j;//변수 선언
  while(1)
  {
    for(i=0;i<80;i++)//출력 주파수
    {
      digitalWrite(buzzer,HIGH);//SOUND ON
      delay(1);//1ms 딜레이
      digitalWrite(buzzer,LOW);//SOUND OFF
      delay(1);//1ms 딜레이
    }
    for(i=0;i<100;i++)//출력 주파수
    {
      digitalWrite(buzzer,HIGH);//SOUND ON
      delay(2);//2ms
      digitalWrite(buzzer,LOW);//SOUND OFF
      delay(2);//2ms
    }
  }
}
