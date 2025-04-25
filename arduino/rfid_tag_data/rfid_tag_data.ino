#include <SPI.h>
#include <MFRC522.h>

const int RST_PIN = 9;
const int SS_PIN = 10;
String cmd = "";
bool wait = false;

struct TagData
{
  char name[16];
  long total;
  long payment;
};

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);		// Initialize serial communications with the PC

	SPI.begin();			// Init SPI bus
	mfrc522.PCD_Init();		// Init MFRC522
	delay(4);				// Optional delay. Some board do need more time after init to be ready, see Readme

  Serial.println("Start!");
}

MFRC522::StatusCode checkAuth(int index, MFRC522::MIFARE_Key key)
{
  MFRC522::StatusCode status = 
    mfrc522.PCD_Authenticate(MFRC522::PICC_CMD_MF_AUTH_KEY_A, index, &key, &(mfrc522.uid));
  
  if (status != MFRC522::STATUS_OK)
  {
    Serial.print("Authentication Failed : ");
    Serial.println(mfrc522.GetStatusCodeName(status));
  }

  return status;
}

MFRC522::StatusCode writeString(int index, MFRC522::MIFARE_Key key, String data)
{
  MFRC522::StatusCode status = checkAuth(index, key);
  if (status != MFRC522::STATUS_OK)
  {
    return status;
  }

  // define buffer & convert string to char array
  char buffer[16];
  memset(buffer, 0x00, sizeof(buffer));
  data.toCharArray(buffer, data.length() + 1);

  // write data
  status = mfrc522.MIFARE_Write(index, (byte*)&buffer, 16);
  if (status != MFRC522::STATUS_OK)
  {
    Serial.print("Write Failed : ");
    Serial.println(mfrc522.GetStatusCodeName(status));
  }

  return status;
}

MFRC522::StatusCode readString(int index, MFRC522::MIFARE_Key key, String& data)
{
  MFRC522::StatusCode status = checkAuth(index, key);
  if (status != MFRC522::STATUS_OK)
  {
    return status;
  }

  // read data
  char buffer[18];
  byte length = 18;

  status = mfrc522.MIFARE_Read(index, (byte*)buffer, &length);
  if (status != MFRC522::STATUS_OK)
  {
    Serial.print("Read Failed : ");
    Serial.println(mfrc522.GetStatusCodeName(status));
  }
  else
  {
    data = String((char*)buffer);
  }

  return status;
}

void toBytes(byte* buffer, int data, int offset = 0)
{
  buffer[offset] = data & 0xFF;
  buffer[offset + 1] = (data >> 8) & 0xFF;
}

int toInteger(byte* buffer, int offset = 0)
{
  return (buffer[offset + 1] << 8 | buffer[offset]);
}

MFRC522::StatusCode writeInteger(int index, MFRC522::MIFARE_Key key, int data)
{
  MFRC522::StatusCode status = checkAuth(index, key);
  if (status != MFRC522::STATUS_OK)
  {
    return status;
  }

  // define buffer & convert string to char array
  byte buffer[16];
  memset(buffer, 0x00, sizeof(buffer));
  toBytes(buffer, data);

  // write data
  status = mfrc522.MIFARE_Write(index, buffer, sizeof(buffer));
  if (status != MFRC522::STATUS_OK)
  {
    Serial.print("Write Failed : ");
    Serial.println(mfrc522.GetStatusCodeName(status));
  }

  return status;
}

MFRC522::StatusCode readInteger(int index, MFRC522::MIFARE_Key key, int& data)
{
  MFRC522::StatusCode status = checkAuth(index, key);
  if (status != MFRC522::STATUS_OK)
  {
    return status;
  }

  // read data
  char buffer[18];
  byte length = 18;

  status = mfrc522.MIFARE_Read(index, (byte*)buffer, &length);
  if (status != MFRC522::STATUS_OK)
  {
    Serial.print("Read Failed : ");
    Serial.println(mfrc522.GetStatusCodeName(status));
  }
  else
  {
    data = toInteger((byte*)buffer);
  }

  return status;
}

MFRC522::StatusCode writeTagData(int index, MFRC522::MIFARE_Key key, TagData data)
{
  MFRC522::StatusCode status = checkAuth(index, key);
  if (status != MFRC522::STATUS_OK)
  {
    return status;
  }

  // define buffer & convert string to char array
  byte buffer[32];
  memset(buffer, 0x00, sizeof(buffer));
  memcpy(buffer, &data, sizeof(data));

  // write data
  for (int i = 0; i < 2; i++)
  {
    status = mfrc522.MIFARE_Write(index + i, buffer + (i * 16), 16);
    if (status != MFRC522::STATUS_OK)
    {
      Serial.print("Write Failed : ");
      Serial.println(mfrc522.GetStatusCodeName(status));
    }
  }

  return status;
}

MFRC522::StatusCode readTagData(int index, MFRC522::MIFARE_Key key, TagData& data)
{
  MFRC522::StatusCode status = checkAuth(index, key);
  if (status != MFRC522::STATUS_OK)
  {
    return status;
  }

  // read data
  char buffer[34];
  byte length = 18;

  for (int i = 0; i < 2; i++)
  {
    status = mfrc522.MIFARE_Read(index + i, (byte*)buffer + (i * 16), &length);
    if (status != MFRC522::STATUS_OK)
    {
      Serial.print("Read Failed : ");
      Serial.println(mfrc522.GetStatusCodeName(status));
    }
  }
  
  memcpy(&data, buffer, sizeof(data));
  return status;
}

void loop() {
  // put your main code here, to run repeatedly:
  // input command
  //String cmd = "";
  if (Serial.available() > 0)
  {
    cmd = Serial.readStringUntil('\n');
    wait = true;
    Serial.println("Waiting for tag...");
  }
  /*
  // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
	if (!mfrc522.PICC_IsNewCardPresent()) {
		return;
	}

	// Select one of the cards
	if (!mfrc522.PICC_ReadCardSerial()) {
		return;
	}
  */
  MFRC522::MIFARE_Key key;
  for (int i = 0; i < 6; i++)
  {
    key.keyByte[i] = 0xFF;
  }

  MFRC522::StatusCode status;
  String s_data;
  int i_data;
  TagData t_data;
  String s_temp;

  if (cmd.length() > 0)
  {
    if (wait)
    {
      // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
	    if (!mfrc522.PICC_IsNewCardPresent()) {
		    return;
	    }

      Serial.print("cmd : ");
      if (mfrc522.PICC_ReadCardSerial())
      {
        switch (cmd.charAt(0))
        {
          case 'w':
            Serial.print("write ");
            switch (cmd.charAt(1))
            {
              case 's':
                Serial.println("string");
                status = writeString(60, key, "norris");
                break;
              case 'i':
                Serial.println("integer");
                status = writeInteger(61, key, 32767);
                mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
                break;
              case 't':
                Serial.println("struct");
                s_temp = "hamilton";
                s_temp.toCharArray(t_data.name, s_temp.length() + 1);
                t_data.total = 214417000;
                t_data.payment = 2000000000;
                status = writeTagData(56, key, t_data);
                mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
                break;
              default:
                Serial.println("unknown type");
                status = MFRC522::STATUS_ERROR;
                break;
            }
            break;
          case 'r':
            Serial.print("read ");
            switch (cmd.charAt(1))
            {
              case 's':
                Serial.println("string");
                status = readString(60, key, s_data);
                Serial.println(s_data);
                break;
              case 'i':
                Serial.println("integer");
                status = readInteger(61, key, i_data);
                Serial.println(i_data);
                break;
              case 't':
                Serial.println("struct");
                status = readTagData(56, key, t_data);
                Serial.print(" name : ");
                Serial.println(String(t_data.name));
                Serial.print(" total : ");
                Serial.println(t_data.total);
                Serial.print(" payment : ");
                Serial.println(t_data.payment);
                break;
              default:
                Serial.println("unknown type");
                status = MFRC522::STATUS_ERROR;
                break;
            }
            break;
          default:
            Serial.println("unknown");
            status = MFRC522::STATUS_ERROR;
            break;
        }

        mfrc522.PICC_HaltA();
        mfrc522.PCD_StopCrypto1();
        wait = false;
        cmd = "";
      }
    }

    if (status == MFRC522::STATUS_OK)
    {
      Serial.println("Success!");
    }
  }
  delay(100);
}
