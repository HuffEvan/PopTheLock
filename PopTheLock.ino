  const int LG = 6;
  const int LB = 5;
  const int R = 4;
  const int RB = 3;
  const int RG = 2;
  const int Button = 7;

  boolean buttonState = false;
  int Press = 
  
  int LV1 = true;
  int LV2 = false;
  int LV3 = false;
  int LV4 = false;
  int LV5 = false;
  int FIN = false;
  int LOOP = false;
  
void setup() {

  pinMode (LG, OUTPUT);
  pinMode (LB, OUTPUT);
  pinMode (R, OUTPUT);
  pinMode (RB, OUTPUT);
  pinMode (RG, OUTPUT);
  pinMode (Button, INPUT);


}

void Green() {
  digitalWrite(R, LOW);
  digitalWrite(LB, LOW);
  digitalWrite(RB, LOW);
  digitalWrite(LG, HIGH);
  digitalWrite(RG, HIGH);
  }

void Blue() {
   digitalWrite(LG, LOW);
  digitalWrite(RG, LOW);
  digitalWrite(R, LOW);
  digitalWrite(RB, HIGH);
  digitalWrite(LB, HIGH);
  }

void Red() {
  digitalWrite(R, HIGH);
  digitalWrite(RB, LOW);
  digitalWrite(LB, LOW);
  digitalWrite(RG, LOW);
  digitalWrite(LG, LOW);
  }

void LEDOff() {
  digitalWrite(R, LOW);
  digitalWrite(RB, LOW);
  digitalWrite(LB, LOW);
  digitalWrite(RG, LOW);
  digitalWrite(LG, LOW);
  
}


void LEDOn() {
  digitalWrite(R, HIGH);
  digitalWrite(RB, HIGH);
  digitalWrite(LB, HIGH);
  digitalWrite(RG, HIGH);
  digitalWrite(LG, HIGH);
  
}
  



void loop() { 

  buttonState = digitalRead(Button);

 
 //LEVEL FIN
      if(FIN == true){
      LEDOn();
      delay(10000);
      FIN = false;
      LEDOff();
      LOOP = true;
      }
      
 
 
 //LEVEL FIVE
      if(LV5 == true){
    Green();
    delay(25);
    Blue();
    delay(25);
    Red();
    delay(25);
    if(buttonState == HIGH){
      Blue();
      delay(1000);
      LV5 = false;
      FIN = true;
     }
      }

 //LEVEL FOUR
      if(LV4 == true){
    Green();
    delay(50);
    Blue();
    delay(50);
    Red();
    delay(50);
    if(buttonState == HIGH){
      Blue();
      delay(1000);
      LV4 = false;
      LV5 = true;
     }
      }
 
 
 //LEVEL THREE
      if(LV3 == true){
    Green();
    delay(100);
    Blue();
    delay(100);
    Red();
    delay(100);
    if(buttonState == HIGH){
      Blue();
      delay(1000);
      LV3 = false;
      LV4 = true;
     }
      }




 //LEVEL TWO
      if(LV2 == true){
    Green();
    delay(200);
    Blue();
    delay(200);
    Red();
    delay(200);
    if(buttonState == HIGH){
      Blue();
      delay(1000);
      LV2 = false;
      LV3 = true;
     }
      }

     
//LEVEL ONE
     if(LV1 == true || LOOP == true){
    Green();
    delay(500);
    Blue();
    delay(500);
    Red();
    delay(500);
    if(buttonState == HIGH){
      Blue();
      delay(1000);
      LV1 = false; 
      LOOP = false;
      LV2 = true;
     }
     }
      
}
