#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include <Ball.h>
#include <Raquette.h>
SoftwareSerial  blueT(19,18);
Raquette ra('j',2,3,36,35,53,52,2,400);
Raquette r('d',5,6,39,38,44,43,2,400);
LiquidCrystal lcd(17,16, 15, 14, 13, 12);
Ball ball(46,47,40,41,8,27,9,26,4,4,100,100,50,49,24,25);
long int last =0;
int scorej1=0;
int scorej2=0;
bool pass=false;
void setup() {
ra.pinSetup();
r.pinSetup();
ball.pinSetup();
lcd.begin(16, 2);
setScore();
r.initPad(0);
ball.initBall();
ball.ready();
}
void loop() {
  ball.moveBall();
  ra.encodeur();
  ra.movePaddle();
  r.encodeur();
  r.movePaddle();
  increment();
  if(millis()-200>=last){
      pass=false;   
  }
}
void setScore(){
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("SCORES ");
  lcd.setCursor(2,1);
  lcd.print(String(scorej2));
  lcd.setCursor(13,1);
  lcd.print(String(scorej1));
  }
  
void increment(){
if(!pass){
  if(ball.scored()==1){
    scorej2+=1;
    setScore();
    last=millis();
    pass=true;
  }
  else if(ball.scored()==0){
    scorej1+=1;
    setScore();
    last=millis();
    pass=true;
  }
}
  }
  
    
