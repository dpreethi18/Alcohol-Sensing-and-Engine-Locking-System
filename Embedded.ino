
#include <LiquidCrystal.h>

int alc=A0;

int led=4;

//int led2=2;

int pezo=10;
 
int val;

int wheel=5;

//LiquidCrystal lcd(12,11,5,4,3,2);

void setup()

{

  Serial.begin(9600);

//  lcd.begin(16,2);

  pinMode(alc,INPUT);

  pinMode(led,OUTPUT);

  pinMode(pezo,OUTPUT);

  pinMode(wheel,OUTPUT);

//pinMode(led2,OUTPUT);

// lcd.print("Time to Start");

  delay(1000);

}

void loop()

{

  //val=analogRead(alc);

  val=100;

  Serial.println(val);

  //lcd.clear();

  if(val<200){

    //lcd.setCursor(0,0);

    //lcd.print("safe driver");

    Serial.println("safe driver");

    digitalWrite(led,LOW);

    digitalWrite(wheel,HIGH);

    noTone(pezo);

    //lcd.clear();

    //tone(pezo,1000,200);

  }

  else if(val < 300){

  //  lcd.print("Warning");

//digitalWrite(led2,HIGH);

    digitalWrite(led,LOW);

    digitalWrite(wheel,LOW);

    delay(1000);

  }

  else{

  tone(pezo,1000,200);

// lcd.print("Drunk Driving");

  digitalWrite(led,HIGH);

  //digitalWrite(led2,LOW);

  digitalWrite(wheel,LOW);

    delay(200);

    tone(pezo,1000,200);

    //delay(1500);


  }

}
