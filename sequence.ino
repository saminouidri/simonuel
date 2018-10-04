#include "sequence.h"

void SequenceLed()
{


  int iSortir = 0;
  int Interne = 0;
  int replay = 0;
  int Valeur = 7;
  int Valeur2 = 0;

  int done = 0;
  int done1 = 0;
  int done2 = 0;
  int done3 = 0;
  int done4 = 0;
  while (iSortir == 0)
  {


    Valeur = Sequence[Interne];
    //Serial.println(Sequence[Interne]);

    switch (Valeur)
    {
      case (-1):
        digitalWrite(LED1, HIGH);
        delay(250);
        digitalWrite(LED1, LOW);
        RejoueSequence[Interne] = Valeur;
        Serial.println(RejoueSequence[Interne]);
        break;

      case (1):
        digitalWrite(LED2, HIGH);
        delay(250);
        digitalWrite(LED2, LOW);
        RejoueSequence[Interne] = Valeur;
        Serial.println(RejoueSequence[Interne]);
        break;

      case (2):

        digitalWrite(LED3, HIGH);
        delay(250);
        digitalWrite(LED3, LOW);
        RejoueSequence[Interne] = Valeur;
        Serial.println(RejoueSequence[Interne]);
        break;

      case (3):

        digitalWrite(LED4, HIGH);
        delay(250);
        digitalWrite(LED4, LOW);
        RejoueSequence[Interne] = Valeur;
        Serial.println(RejoueSequence[Interne]);
        break;

      case (5):

        for (replay = 0; replay <= Interne; replay++)
        {
          Valeur2 = RejoueSequence[replay];
          switch (Valeur2)
          {
            case (-1):
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
                  done = 1;


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
              } while (done == 0);
              break;

            case (1):
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
                  done1 = 1;


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
              } while (done1 == 0);
              break;

            case (2):
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
                  done2 = 1;


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
              } while (done2 == 0);
              break;

            case (3):
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
                  done3 = 1;


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
              } while (done3 == 0);
              break;
          }
        }
        iSortir = 1;
        break;



    }

    Interne++;

  }

}

