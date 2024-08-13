#include <Keypad.h>
#include <Servo.h>

const uint8_t LEDS = 12;
#include <LiquidCrystal.h>

#define codeLength 5
Servo myservo;
char Code[codeLength];
char PassW[codeLength] = "1234";
byte keycount = 0;

const uint8_t ROWS = 4;
const uint8_t COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

LiquidCrystal lcd(13,12,9,8,7,6);
uint8_t rowPins[ROWS] = { 26, 22, 21, 20 }; 
uint8_t colPins[COLS] = { 19, 18, 17, 16 }; 

Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() 
{
  lcd.begin(16,2);
  lcd.print("Enter a Key:-");
  myservo.attach(28);
}

void loop()
{
  int pos;
  char customKey = customKeypad.getKey();
  if(customKey)
  {
	 Code[keycount] = customKey;
	 Serial.print(Code[keycount]);
     lcd.setCursor(5,1);
     lcd.print(Code[keycount]);
	 keycount++;
    
  }
  if(keycount==codeLength-1)
  {
    Serial.println("");
    if(!strcmp(Code,PassW))
    {
      Serial.println("Correct Password");
      lcd.clear();
      lcd.setCursor(0,1);
      lcd.print("Correct Password");
      for(pos = 90; pos<=180;pos++)
      {
        myservo.write(pos);
        delay(40);
      }
      delay(1000);
      for(pos = 180; pos>=90;pos--)
      {
        myservo.write(pos);
        delay(40);
      }
    }
     else
  {
    Serial.println("Incorrect Password");
    delay(1000);
  }
  deletecount();
  }
}

void deletecount()
{
  while(keycount!=0)
  {
    Code[keycount--]=0;
  }
  return;
}
