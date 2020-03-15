

int sol1 = 2;
int sol2 = 3;
int sol3 = 4;
int sol4 = 5;
int shiftup = A0;
int shiftdown = A1;
int tap = 0;
int gear = 0;
int neutru = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sol1, OUTPUT);
  pinMode(sol2, OUTPUT);
  pinMode(sol3, OUTPUT);
  pinMode(sol4, OUTPUT);
  pinMode (A0, INPUT_PULLUP);
  pinMode (A1, INPUT_PULLUP);

  digitalWrite(sol1, HIGH);
  digitalWrite(sol2, HIGH);
  digitalWrite(sol3, HIGH);
  digitalWrite(sol4, HIGH);
}

void loop() {

  // put your main code here, to run repeatedly:
  if (digitalRead(shiftup) == LOW)
  {

    switch (gear) {

      // case -1:
      //upshift to gear 0
      //   digitalWrite(sol3, HIGH);
      //digitalWrite(sol4, LOW);
      //   digitalWrite(sol2, HIGH);
      //  digitalWrite(sol1, HIGH);
      //  delay (100);
      //  gear =  0;
      //  break;



      case 0:
        //upshift to gear 1
        digitalWrite(sol3, LOW);
        delay (100);
        digitalWrite(sol1, LOW);
        gear =  1;
        delay (1000);
        break;

      case 1:
        //upshift to gear 2
        digitalWrite(sol3, LOW);
        digitalWrite(sol1, HIGH);
        delay (100);
        digitalWrite(sol2, LOW );
        gear =  2;
        delay (1000);
        break;

      case 2:
        //upshift to gear 3
        digitalWrite(sol2, HIGH);
        delay (300);
        digitalWrite(sol3, HIGH);
        delay (100);
        digitalWrite(sol1, LOW);
        gear =  3;
        delay (1000);
        break;

      case 3:
        //upshift to gear 4
        digitalWrite(sol1, HIGH);
        digitalWrite(sol2, HIGH);
        gear =  4;
        delay (1000);
        break;
      default:
      gear=4;
    }

  if (digitalRead(shiftdown) == LOW)
  {

    switch (gear) {

      // case -1:
      //upshift to gear 0
      //   digitalWrite(sol3, HIGH);
      //digitalWrite(sol4, LOW);
      //   digitalWrite(sol2, HIGH);
      //  digitalWrite(sol1, HIGH);
      //  delay (100);
      //  gear =  0;
      //  break;

      case 4:
        //downshiftshift to gear 3
        digitalWrite(sol2, HIGH);
        delay (300);
        digitalWrite(sol3, HIGH);
        delay (100);
        digitalWrite(sol1, LOW);
        gear =  3;
        delay (1000);
        break;

      case 5:
        //upshift to gear 1
        digitalWrite(sol3, LOW);
        delay (100);
        digitalWrite(sol1, LOW);
        gear =  3;
        delay (1000);
        break;

      case 6:
        //upshift to gear 2
        digitalWrite(sol3, LOW);
        digitalWrite(sol1, HIGH);
        delay (100);
        digitalWrite(sol2, LOW );
        gear =  2;
        delay (1000);
        break;



      case 7:
        //upshift to gear 4
        digitalWrite(sol1, HIGH);
        digitalWrite(sol2, HIGH);
        gear =  4;
        delay (1000);
        break;
    }
  }
}
}
