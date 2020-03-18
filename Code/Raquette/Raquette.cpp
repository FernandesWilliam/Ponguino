#include <Arduino.h>
#include "Raquette.h"

Raquette :: Raquette(char player,int direction, int step, int clk, int dt, int ruptG, int ruptD,int speed,int pas){
		//player
		_player= player;
		//micro-rupteur
		_ruptG= ruptG;
		_ruptD=ruptD;
		//moteur 
		_direction = direction;
		_step= step;
		//encodeur 
		_encodeurCLK=clk;
		_encodeurDT=dt;

		//
		_lastPad =0;
		_lastCLK= 0;
		_lastime=0;
		_actionMot= false;
		x=0;
		_sens=0;
		_position=0;
		_speed=speed;
		_deplacement=20;
		_lastsens=0;
		_pas = pas;

}

void Raquette :: pinSetup(){
		//moteur 
		Serial.begin(115200);
		pinMode(_direction,OUTPUT);
		pinMode(_step,OUTPUT);
		//micro rupteur 
		pinMode(_ruptG,INPUT);
      	pinMode(_ruptD,INPUT);
      	//encodeur 
      	pinMode(_encodeurCLK,INPUT);
      	pinMode(_encodeurDT,INPUT);
      	delay(200);


}
void Raquette :: initPad(int dir){

	digitalWrite(_direction,dir);
	while (digitalRead(_ruptD)!=1){
			if(x<400){

			if (millis()-2>=_lastime){
   			digitalWrite(_step,HIGH);
    		digitalWrite(_step,LOW);
    		x++; 
    		_lastime=millis();
    		}
			}
			x=0;
		}
		_position=0;




}

void Raquette :: movePaddle(){
	if(_lastPad!=_movePad){
			if (_lastPad<_movePad){
				_sens=1;
			}
			else{
				_sens = 0;
			}
		_actionMot=true;
	}else {
		_actionMot= false;
	}
	if(hitCoin()){
	if((_actionMot==true)|| (x<_pas && x!=0)){
		if( ((x<_pas) && (x!=0))){
				rotation(_lastsens);
		}
		
		else if (_actionMot){
			rotation(_sens);
			_lastsens=_sens;
		}
		
		
	}else{
		x=0;
		
		
	}
	}
	_lastPad=_movePad;

}


void Raquette :: encodeur(){
	_newCLK=digitalRead(_encodeurCLK);
	if((_lastCLK==0)&&(_newCLK== 1)){
		if(digitalRead(_encodeurDT)== 0){
			_movePad--;
			_position-=_deplacement;
		}else if(digitalRead(_encodeurDT)==1) {
			_movePad++;
			_position+=_deplacement;
		}
		
		
		}

	_lastCLK=_newCLK;


	

}
void Raquette :: rotation(int _sens){
	if(_sens==1){
		digitalWrite(_direction,LOW);
	}else {
		digitalWrite(_direction,HIGH);
	}
	
	if(x<_pas){
			if (millis()-_speed>=_lastime){
   			digitalWrite(_step,HIGH);
    		digitalWrite(_step,LOW);
    		x++; 
    		_lastime=millis();
    		}
			}

}
bool Raquette :: hitCoin(){

	if((digitalRead(_ruptD)==1 && _sens==1)){
		_position=390;
		x=0;
		return false;
	}
	else if ((digitalRead(_ruptG)==1 && _sens==0)){
		_position =0;
		x=0;
		return false ;

		}
	else{
		return true ;
	}
}

