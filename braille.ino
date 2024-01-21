#include <SPI.h>


char a[4];
void setup(){
   Serial.begin(9600);
 
  pinMode(5,
  INPUT_PULLUP);
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  
 
  
}
void loop()
{ int v=0;
  int i=digitalRead(5);  //switch 1
  int j=digitalRead(2);  //switch 2
  int k=digitalRead(3);  //switch 3
  int l=digitalRead(4);  //switch 4
  int m=digitalRead(6);  //switch 5
  int n=digitalRead(7);  //switch 6
 
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
     {
      Serial.println("0");
      if(v<=4)
      a[v++]="0";
      
      delay(500);
     
    }
   else
   if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.println("1");
      if(v<=4)
      a[v++]="1";
     delay(500);
    }
    else
      if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.println("2");
      if(v<=4)
      a[v++]="2";
      delay(500);
      
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.println("3");
      if(v<=4)
      a[v++]="3";
      delay(500);
     
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.println("4");
      if(v<=4)
      a[v++]="4";
      delay(500);
       
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.println("5");
      if(v<=4)
      a[v++]="5";
      delay(500);
       
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.println("6");
      if(v<=4)
      a[v++]="6";
      delay(500);
      
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.println("7");
      if(v<=4)
      a[v++]="7";
      delay(500);
    
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.println("8");
      if(v<=4)
      a[v++]="8";
      delay(500);
       
    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.println("9");
      if(v<=4)
      a[v++]="9";
      delay(500);
      
    }
    else
      if(i==LOW&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.println(" ");
      delay(500);
      
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.println();
      delay(500);
     
    }
  
  delay(250);
}