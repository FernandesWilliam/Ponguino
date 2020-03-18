#include <Arduino.h>
#include "Ball.h"

Ball :: Ball(int ruptGx,int ruptDx,int ruptGy,int ruptDy,int directionX,int directionY,int stepX,int stepY,int speedX,int speedY,int pasX, int pasY,int ruptGmilieu,int ruptDmilieu,int boutonj1,int boutonj2){
	//microrupteur 
	_ruptGx=ruptGx;
	_ruptDx=ruptDx;
	_ruptGy=ruptGy;
	_ruptDy=ruptDy;
	_ruptGmilieu=ruptGmilieu;
	_ruptDmilieu=ruptDmilieu;
	// Position de la balle 
	_positionX=0;
	_positionY=0;
	_deplacementX=20;
	_deplacementY=20;
	//vitesse de la balle 
	_speedX=speedX;
	_speedY=speedY;
	_pasX=pasX;
	_pasY=pasY;
	//moteur axe X
	_directionX=directionX;
	_stepX=stepX;
	//moteur axe Y
	_directionY=directionY;
	_stepY=stepY;
	x=0;
	y=0;
	_boutonJ1=boutonj1;
	_boutonJ2=boutonj2;
	_lastimeX=0;
	_lastimeY=0;
	_stopMots=false;
	_score=0;
	restart=0;
	pasRes=200;
	speedRes=3;
	lastRes=0;
	lastmillis=0;
}



void Ball :: pinSetup(){
	//moteur 
		pinMode(_directionX,OUTPUT);
		pinMode(_stepX,OUTPUT);

		pinMode(_directionY,OUTPUT);
		pinMode(_stepY,OUTPUT);
		//micro rupteur 
		pinMode(_ruptGx,INPUT);
      	pinMode(_ruptDx,INPUT);
	
		pinMode(_ruptGy,INPUT);
      	pinMode(_ruptDy,INPUT);
      	pinMode(_ruptDmilieu,INPUT);
      	pinMode(_ruptGmilieu,INPUT);
      	pinMode(_boutonJ1,INPUT);
      	pinMode(_boutonJ2,INPUT);
      	delay(200);


	//4 micro rupteur 
	// 2 moteur pas à pas 


}

void Ball :: initBall(){

	while(digitalRead(_ruptDmilieu)==0){
		int a=0;
		int b=0;
		if(digitalRead(_ruptGx)!=1){
			digitalWrite(_directionX,HIGH);
		if(a<100){
				if(millis()-4>=lastmillis){
					digitalWrite(_stepX,HIGH);
					digitalWrite(_stepX,LOW);
					a++;
					lastmillis=millis();
				}

		}
		}else {
				digitalWrite(_directionY,HIGH);
				if(b<100){
				if(millis()-4>=lastmillis){
					digitalWrite(_stepY,HIGH);
					digitalWrite(_stepY,LOW);
					b++;
					lastmillis=millis();
		}
		
}
}
}}
	//remet à 0 

void Ball  :: ready(){
	while( (digitalRead(_boutonJ1)!=0) || (digitalRead(_boutonJ2)!=0)){
		restart=0;
		lastRes=0;
	}

}

void Ball :: moveBall(){
	if(!_stopMots){
	moveBx(); 
	moveBy();
	rotationX();
	rotationYPad();
	rotationY();
	}
	else if(_stopMots){
	scored();
	restartGame();
	
}
}
	



void Ball :: restartGame(){
	int wbouton;
	
	if(digitalRead(_directionY)==1){
		wbouton=_boutonJ1;
		
	}else{
		wbouton=_boutonJ2;
	}
	
	if((restart<pasRes) && (restart >= 0)){
		if(millis()- speedRes>=lastRes){
			digitalWrite(_stepY,HIGH);
			digitalWrite(_stepY,LOW);
			restart++;
			Serial.println(restart);
			lastRes=millis();
		}	
	}

	else if(restart>=pasRes && digitalRead(wbouton)==1){

		moveBx();
		rotationX();
	}else{
		_stopMots=false;
		restart=0;
	}
}


void Ball :: moveBx(){
	if(x<_pasX){
      if (millis()-_speedX>=_lastimeX){
        digitalWrite(_stepX,HIGH);
        digitalWrite(_stepX,LOW);
        x++; 
        _lastimeX=millis();
}
//_positionX+=_deplacementX;
}
x=0;
}
void Ball :: moveBy(){
	if(y<_pasY){
      if (millis()-_speedY>=_lastimeY){
        digitalWrite(_stepY,HIGH);
        digitalWrite(_stepY,LOW);
        y++; 
        _lastimeY=millis();
}

}
y=0;
}



void Ball :: rotationX(){
	
	if(digitalRead(_ruptGx)==HIGH){
		digitalWrite(_directionX,0);
		_positionX=0;
		_deplacementX*=-1;
	}
	else if(digitalRead(_ruptDx)==HIGH){
		digitalWrite(_directionX,1);
		_positionX=390;
		_deplacementX*=-1;
	}	
}
void Ball :: rotationYPad(){
	if(digitalRead(_ruptDmilieu)){// pad 1 
		digitalWrite(_directionY,LOW);
		_deplacementY*=-1;
		}
	else if(digitalRead(_ruptGmilieu)){//pad
		digitalWrite(_directionY,HIGH);
		_deplacementY*=-1;
	}
}
void Ball :: rotationY(){
	if(digitalRead(_ruptGy)==HIGH){
		digitalWrite(_directionY,HIGH);
		_stopMots=true;
	}
	else if(digitalRead(_ruptDy)==HIGH){
		digitalWrite(_directionY,LOW);
		_stopMots=true;
	}
}
	

int Ball :: scored(){
	if(digitalRead(_ruptGy)==HIGH || digitalRead(_ruptDy)==HIGH){
		if(digitalRead(_ruptGy)==HIGH){
			_score=0;
		}else{
			_score=1;
		}
		return _score;
	}
	return 2;
	


}

