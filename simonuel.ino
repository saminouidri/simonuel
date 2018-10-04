/*******************************************************************************
  Project Name     : Simonuel
  Name             : Surox - 2ELN-HP
  Date de creation : 27.08.2018
  Description      : Rythm game

  Hardware utilise : Arduino nano r3 16 MHz 
*******************************************************************************/
// -----------------------------------------------------------------------------
// Define
#define latch 10 //outputs latch, clock and data on ET2Nano
#define clk 9
#define ds 13
#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define BT1 A0
#define BT2 A1
#define BT3 A2
#define BT4 A3

// -----------------------------------------------------------------------------
// Include
#include "sequence.h"
// -----------------------------------------------------------------------------
// Prototype

// -----------------------------------------------------------------------------
// Declaration des variables et constantes globales

int iRandNumber = 0;
int iCompteur = 0;
int Sequence[100];
int RejoueSequence[100];






void setup()
{
  pinMode(latch, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(ds, OUTPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(BT1, INPUT_PULLUP);
  pinMode(BT2, INPUT_PULLUP);
  pinMode(BT3, INPUT_PULLUP);
  pinMode(BT4, INPUT_PULLUP);

  Serial.begin(9600);
  randomSeed(analogRead(0));
  int init = 0;
  for (init = 0; init < 100; init++)
  {
    Sequence[init] = 5 ;
    RejoueSequence[init] = 5;
    //Serial.println(Sequence[init]);
  }
   
   
}

void loop()
{
  
  int iEtatBT1 = 0;
  int iEtatBT2 = 0;
  int iEtatBT3 = 0;
  int iEtatBT4 = 0;
  int Flip = 0;
  int Flip2 = 0;
  int Flip3 = 0;
  int Flip4 = 0;
  int FirstTime = 0;
  iRandNumber = random(4);
  //Serial.println(iRandNumber);

  

  switch (iRandNumber)
  {
    case (0):

      if(iCompteur == 0)
      {
        FirstTime = 1;
      }
      else
      {
        SequenceLed();
      }
      
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1, LOW);
      delay(500);
      


      do
      {
        if ( (digitalRead(BT1) == HIGH) && (digitalRead(BT2) == HIGH) && (digitalRead(BT3) == HIGH) && (digitalRead(BT4) == HIGH))
        {
          digitalWrite(LED1, LOW);



        }
        else if (digitalRead(BT1) == LOW)
        {
         
          digitalWrite(LED1, HIGH);
          delay(250);
          digitalWrite(LED1, LOW);
          Flip = -1;
          Sequence[iCompteur] = Flip;
          //Serial.println(Sequence[iCompteur]);
           iCompteur++;



        }
        else
        {
          digitalWrite(LED2, HIGH);
          digitalWrite(LED3, HIGH);
          delay(500);
          digitalWrite(LED2, LOW);
          digitalWrite(LED3, LOW);
          delay(100);
          digitalWrite(LED1 , HIGH);
          digitalWrite(LED4, HIGH);
          delay(500);
          digitalWrite(LED1, LOW);
          digitalWrite(LED4, LOW);
        }
      } while (Flip == 0);



      break;

    case (1):

      if(iCompteur == 0)
      {
        FirstTime = 1;
      }
      else
      {
        SequenceLed();
      }
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
     

      do
      {
        if ( (digitalRead(BT1) == HIGH) && (digitalRead(BT2) == HIGH) && (digitalRead(BT3) == HIGH) && (digitalRead(BT4) == HIGH))
        {
          digitalWrite(LED2, LOW);



        }
        else if (digitalRead(BT2) == LOW)
        {
         
          digitalWrite(LED2, HIGH);
          delay(250);
          digitalWrite(LED2, LOW);
          Flip2 = 1;
          Sequence[iCompteur] = Flip2;
          //Serial.println(Sequence[iCompteur]);
           iCompteur++;

        }
        else
        {
          digitalWrite(LED2, HIGH);
          digitalWrite(LED3, HIGH);
          delay(500);
          digitalWrite(LED2, LOW);
          digitalWrite(LED3, LOW);
          delay(100);
          digitalWrite(LED1 , HIGH);
          digitalWrite(LED4, HIGH);
          delay(500);
          digitalWrite(LED1, LOW);
          digitalWrite(LED4, LOW);
        }
      } while (Flip2 == 0);
      break;

    case (2):

      if(iCompteur == 0)
      {
        FirstTime = 1;
      }
      else
      {
        SequenceLed();
      }
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      

      do
      {
        if ( (digitalRead(BT1) == HIGH) && (digitalRead(BT2) == HIGH) && (digitalRead(BT3) == HIGH) && (digitalRead(BT4) == HIGH))
        {
          digitalWrite(LED3, LOW);



        }
        else if (digitalRead(BT3) == LOW)
        {
         
          digitalWrite(LED3, HIGH);
          delay(250);
          digitalWrite(LED3, LOW);
          Flip3 = 2;
          Sequence[iCompteur] = Flip3;
          //Serial.println(Sequence[iCompteur]);
           iCompteur++; 

        }
        else
        {
          digitalWrite(LED2, HIGH);
          digitalWrite(LED3, HIGH);
          delay(500);
          digitalWrite(LED2, LOW);
          digitalWrite(LED3, LOW);
          delay(100);
          digitalWrite(LED1 , HIGH);
          digitalWrite(LED4, HIGH);
          delay(500);
          digitalWrite(LED1, LOW);
          digitalWrite(LED4, LOW);
        }
      } while (Flip3 == 0);
      break;

    case (3):


      if(iCompteur == 0)
      {
        FirstTime = 1;
      }
      else
      {
        SequenceLed();
      }
      digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED4, LOW);
      

      do
      {
        if ( (digitalRead(BT1) == HIGH) && (digitalRead(BT2) == HIGH) && (digitalRead(BT3) == HIGH) && (digitalRead(BT4) == HIGH))
        {
          digitalWrite(LED4, LOW);



        }
        else if (digitalRead(BT4) == LOW)
        {
         
          digitalWrite(LED4, HIGH);
          delay(250);
          digitalWrite(LED4, LOW);
          Flip4 = 3;
          Sequence[iCompteur] = Flip4;
          //Serial.println(Sequence[iCompteur]);
           iCompteur++;
        }
        else
        {
          digitalWrite(LED2, HIGH);
          digitalWrite(LED3, HIGH);
          delay(500);
          digitalWrite(LED2, LOW);
          digitalWrite(LED3, LOW);
          delay(100);
          digitalWrite(LED1 , HIGH);
          digitalWrite(LED4, HIGH);
          delay(500);
          digitalWrite(LED1, LOW);
          digitalWrite(LED4, LOW);
        }
      } while (Flip4 == 0);
      break;




  }










}

// -----------------------------------------------------------------------------




