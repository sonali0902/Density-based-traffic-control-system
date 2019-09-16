#include<LiquidCrystal.h>

#define  UE1     A9 
#define  UE2     A10
#define  UE3     A8 
#define  UE4     A11
#define  AMB     A12

const int R1  = 8  ;
const int R2  = 7  ;
const int R3  = 2  ;
const int R4  = 16 ;
const int Y1  = 9  ;
const int Y2  = 6  ;
const int Y3  = 3  ;
const int Y4  = 15 ;
const int G1  = 10 ;
const int G2  = 5  ;
const int G3  = 4  ;
const int G4  = 14 ;
const int UT1 = 28 ;
const int UT2 = 30 ;
const int UT3 = 26 ;
const int UT4 = 32 ;


LiquidCrystal lcd(46, 48, 40, 38, 36, 34);

long duration1, duration2, duration3, duration4;
int  distance1, distance2, distance3, distance4;
unsigned char uncD1, uncD2, uncD3, uncD4;

unsigned char fnDistance1_monitor()
{
    digitalWrite(UT1, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(UT1, HIGH);
    delayMicroseconds(10);
    digitalWrite(UT1, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration1 = pulseIn(UE1, HIGH);
    // Calculating t he distance
    distance1 = duration1*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("1st traffic Distance: ");
    Serial.println(distance1);
    if(( distance1 >= 10 ) && (distance1 <= 14))
    {
      return 3;
      Serial.print("Entered if loop");
      delay(1000);
    }    
    else if(( distance1 > 5 ) && (distance1 < 8))
      return 2;

    else 
      return 1;
}

unsigned char fnDistance2_monitor()
{
    digitalWrite(UT2, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(UT2, HIGH);
    delayMicroseconds(10);
    digitalWrite(UT2, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration2 = pulseIn(UE2, HIGH);
    // Calculating the distance
    distance2 = duration2*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("2nd traffic Distance: ");
    Serial.println(distance2);
    if(( distance2 > 10 ) && (distance2 < 14))
      return 3;
        
    else if(( distance2 > 5 ) && (distance2 < 8))
      return 2;

    else 
      return 1;
}

unsigned char fnDistance3_monitor()
{
    digitalWrite(UT3, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(UT3, HIGH);
    delayMicroseconds(10);
    digitalWrite(UT3, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration3 = pulseIn(UE3, HIGH);
    // Calculating the distance
    distance3 = duration3*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("3rd traffic Distance: ");
    Serial.println(distance3);
    if(( distance3 > 10 ) && (distance3 < 14))
      return 3;
        
    else if(( distance3 > 5 ) && (distance3 < 8))
      return 2;

    else 
      return 1;
}

unsigned char fnDistance4_monitor()
{
    digitalWrite(UT4, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(UT4, HIGH);
    delayMicroseconds(10);
    digitalWrite(UT4, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration4 = pulseIn(UE4, HIGH);
    // Calculating the distance
    distance4 = duration4*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("4th traffic Distance: ");
    Serial.println(distance4);
    if(( distance4 > 10 ) && (distance4 < 14))
      return 3;
        
    else if(( distance4 > 5 ) && (distance4 < 8))
      return 2;

    else 
      return 1;
        
}

void fnTraffic_1()
{
    fnAmbulance_monitor();
    digitalWrite(R4, LOW);
    digitalWrite(Y4, HIGH);
    digitalWrite(G4, LOW);

    digitalWrite(R1, LOW);
    digitalWrite(Y1, HIGH);
    digitalWrite(G1, LOW);
    delay(500);
    digitalWrite(R1, LOW);
    digitalWrite(Y1, LOW);
    digitalWrite(G1, HIGH);
    
    digitalWrite(R2, HIGH);
    digitalWrite(Y2, LOW);
    digitalWrite(G2, LOW);
    
    digitalWrite(R3, HIGH);
    digitalWrite(Y3, LOW);
    digitalWrite(G3, LOW);
    
    digitalWrite(R4, HIGH);
    digitalWrite(Y4, LOW);
    digitalWrite(G4, LOW);
    fnAmbulance_monitor();
    fnDensity_monitor();
    fnAmbulance_monitor();
}

void fnTraffic_2()
{
    fnAmbulance_monitor();
    digitalWrite(R1, LOW);
    digitalWrite(Y1, HIGH);
    digitalWrite(G1, LOW);
    
    digitalWrite(R2, LOW);
    digitalWrite(Y2, HIGH);
    digitalWrite(G2, LOW);
    delay(500);
    
    digitalWrite(R1, HIGH);
    digitalWrite(Y1, LOW);
    digitalWrite(G1, LOW);
    
    digitalWrite(R2, LOW);
    digitalWrite(Y2, LOW);
    digitalWrite(G2, HIGH);
    
    digitalWrite(R3, HIGH);
    digitalWrite(Y3, LOW);
    digitalWrite(G3, LOW);
    
    digitalWrite(R4, HIGH);
    digitalWrite(Y4, LOW);
    digitalWrite(G4, LOW);
    fnAmbulance_monitor();
    fnDensity_monitor();
    fnAmbulance_monitor();
}

void fnTraffic_3()
{
    fnAmbulance_monitor();
    digitalWrite(R1, HIGH);
    digitalWrite(Y1, LOW);
    digitalWrite(G1, LOW);
    
    digitalWrite(R2, LOW);
    digitalWrite(Y2, HIGH);
    digitalWrite(G2, LOW);
    
    digitalWrite(R3, LOW);
    digitalWrite(Y3, HIGH);
    digitalWrite(G3, LOW);
    delay(500);
    digitalWrite(R3, LOW);
    digitalWrite(Y3, LOW);
    digitalWrite(G3, HIGH);
    
    digitalWrite(R2, HIGH);
    digitalWrite(Y2, LOW);
    digitalWrite(G2, LOW);
    
    digitalWrite(R4, HIGH);
    digitalWrite(Y4, LOW);
    digitalWrite(G4, LOW);
    fnAmbulance_monitor();
    fnDensity_monitor();
    fnAmbulance_monitor();
}

void fnTraffic_4()
{
    fnAmbulance_monitor();
    digitalWrite(R1, HIGH);
    digitalWrite(Y1, LOW);
    digitalWrite(G1, LOW);
    
    digitalWrite(R2, HIGH);
    digitalWrite(Y2, LOW);
    digitalWrite(G2, LOW);
    
    digitalWrite(R3, LOW);
    digitalWrite(Y3, HIGH);
    digitalWrite(G3, LOW);

    digitalWrite(R4, LOW);
    digitalWrite(Y4, HIGH);
    digitalWrite(G4, LOW);
    delay(500);
    digitalWrite(R3, HIGH);
    digitalWrite(Y3, LOW);
    digitalWrite(G3, LOW);

    digitalWrite(R4, LOW);
    digitalWrite(Y4, LOW);
    digitalWrite(G4, HIGH);
    fnAmbulance_monitor();
    fnDensity_monitor();
    fnAmbulance_monitor();
}

void fnDensity_monitor()
{
  uncD1 = fnDistance1_monitor();
  uncD2 =  fnDistance2_monitor();
  uncD3 =  fnDistance3_monitor();
  uncD4 =  fnDistance4_monitor();

  if(uncD1 ==  3)
  {
    fnAmbulance_monitor();
    lcd.clear();
    Serial.print("Inside loop");
    Serial.print(uncD1);
    lcd.setCursor(0,0);
    lcd.print("Traffic 1");
    
      for(int iLcount = 20; iLcount > 0; iLcount--)
      {
        delay(1000);
        fnAmbulance_monitor();
        lcd.setCursor(0,1);
        lcd.print( iLcount);
         
        if(iLcount == 9)
        {
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Traffic 1");
          lcd.setCursor(0,1);
          lcd.print(iLcount);
        }
        
        digitalWrite(R4, HIGH);
        digitalWrite(Y4, LOW);
        digitalWrite(G4, LOW);
        
        digitalWrite(R1, HIGH);
        digitalWrite(Y1, LOW);
        digitalWrite(G1, LOW);
        
        digitalWrite(R2, HIGH);
        digitalWrite(Y2, LOW);
        digitalWrite(G2, LOW);
        
        digitalWrite(R3, LOW);
        digitalWrite(Y3, LOW);
        digitalWrite(G3, HIGH); 
      }
   }

  if(uncD2 ==  3)
  {
    lcd.clear();
    Serial.print("Inside loop");
    Serial.print(uncD1);
    lcd.setCursor(0,0);
    lcd.print("Traffic 2");
    
      for(int iLcount = 15; iLcount > 0; iLcount--)
      {
        delay(1000);
        fnAmbulance_monitor();
        lcd.setCursor(0,1);
        lcd.print( iLcount);
         
        if(iLcount == 9)
        {
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Traffic 2");
          lcd.setCursor(0,1);
          lcd.print(iLcount);
        }
        
        digitalWrite(R4, LOW);
        digitalWrite(Y4, LOW);
        digitalWrite(G4, HIGH);
        
        digitalWrite(R1, HIGH);
        digitalWrite(Y1, LOW);
        digitalWrite(G1, LOW);
        
        digitalWrite(R2, HIGH);
        digitalWrite(Y2, LOW);
        digitalWrite(G2, LOW);
        
        digitalWrite(R3, HIGH);
        digitalWrite(Y3, LOW);
        digitalWrite(G3, LOW); 
      }
  }

  if(uncD3 ==  3)
  {
    lcd.clear();
    Serial.print("Inside loop");
    Serial.print(uncD1);
    lcd.setCursor(0,0);
    lcd.print("Traffic 3");
    
      for(int iLcount = 16; iLcount > 0; iLcount--)
      {
        delay(1000);
        fnAmbulance_monitor();
        lcd.setCursor(0,1);
        lcd.print( iLcount);
         
        if(iLcount == 9)
        {
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Traffic 3");
          lcd.setCursor(0,1);
          lcd.print(iLcount);
        }
        
        digitalWrite(R4, HIGH);
        digitalWrite(Y4, LOW);
        digitalWrite(G4, LOW);
        
        digitalWrite(R1, LOW);
        digitalWrite(Y1, LOW);
        digitalWrite(G1, HIGH);
        
        digitalWrite(R2, HIGH);
        digitalWrite(Y2, LOW);
        digitalWrite(G2, LOW);
        
        digitalWrite(R3, HIGH);
        digitalWrite(Y3, LOW);
        digitalWrite(G3, LOW); 
      }
  }

  if(uncD4 ==  3)
  {
    lcd.clear();
    Serial.print("Inside loop");
    Serial.print(uncD1);
    lcd.setCursor(0,0);
    lcd.print("Traffic 4");
    
      for(int iLcount = 25; iLcount > 0; iLcount--)
      {
        delay(1000);
        fnAmbulance_monitor();
        lcd.setCursor(0,1);
        lcd.print( iLcount);
         
        if(iLcount == 9)
        {
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Traffic 4");
          lcd.setCursor(0,1);
          lcd.print(iLcount);
        }
        
        digitalWrite(R4, HIGH);
        digitalWrite(Y4, LOW);
        digitalWrite(G4, LOW);
        
        digitalWrite(R1, HIGH);
        digitalWrite(Y1, LOW);
        digitalWrite(G1, LOW);
        
        digitalWrite(R2, LOW);
        digitalWrite(Y2, LOW);
        digitalWrite(G2, HIGH);
        
        digitalWrite(R3, HIGH);
        digitalWrite(Y3, LOW);
        digitalWrite(G3, LOW); 
      }
  }
   
}

void fnAmbulance_monitor()
{
  
    if(digitalRead(AMB) == HIGH)
    {
        lcd.clear();
        delay(100);
        lcd.setCursor(0,0);
        lcd.print("   EMERGENCY ");
        digitalWrite(R4, HIGH);
        digitalWrite(Y4, LOW);
        digitalWrite(G4, LOW);
        
        digitalWrite(R1, HIGH);
        digitalWrite(Y1, LOW);
        digitalWrite(G1, LOW);
        
        digitalWrite(R2, LOW);
        digitalWrite(Y2, LOW);
        digitalWrite(G2, HIGH);
        
        digitalWrite(R3, HIGH);
        digitalWrite(Y3, LOW);
        digitalWrite(G3, LOW); 
        delay(10000);
    }
}

void setup() 
{
    lcd.begin(16,2);
    lcd.setCursor(0,0);
    lcd.print("TRAFFIC DENSITY");
    lcd.setCursor(0,1);
    lcd.print("   CONTROL ");
    
    pinMode(R1, OUTPUT);
    pinMode(R2, OUTPUT);
    pinMode(R3, OUTPUT);
    pinMode(R4, OUTPUT);
    pinMode(Y1, OUTPUT);
    pinMode(Y2, OUTPUT);
    pinMode(Y3, OUTPUT);
    pinMode(Y4, OUTPUT);
    pinMode(G1, OUTPUT);
    pinMode(G2, OUTPUT);
    pinMode(G3, OUTPUT);
    pinMode(G4, OUTPUT);
    pinMode(UT1, OUTPUT); 
    pinMode(UE1, INPUT);
    pinMode(UT2, OUTPUT); 
    pinMode(UE2, INPUT);
    pinMode(UT3, OUTPUT); 
    pinMode(UE3, INPUT);
    pinMode(UT4, OUTPUT); 
    pinMode(UE4, INPUT);
    pinMode(AMB, INPUT);   
    
    Serial.begin(9600);
}

void loop() 
{
    lcd.setCursor(0,0);
    lcd.print("TRAFFIC DENSITY");
    lcd.setCursor(0,1);
    lcd.print("   CONTROL ");
    fnTraffic_1();
    delay(1000);
    fnAmbulance_monitor();
    fnTraffic_2();
    delay(1000);
    fnAmbulance_monitor();
    fnTraffic_3();
    delay(1000);
    fnAmbulance_monitor();
    fnTraffic_4();
    delay(1000);
    fnAmbulance_monitor();

}
