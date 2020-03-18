#ifndef Ball_
#define Ball_
#include <Arduino.h>

class Ball{

public : 
	Ball(int ruptGx,int ruptDx,int ruptGy,int ruptDy,int directionX,int directionY,int stepX,int stepY,int speedX,int speedY,int pasX,int pasY, int ruptGmilieu, int ruptDmilieu,int boutonj1,int boutonj2);
	void pinSetup();
	void initBall();
	void rotationX();
	void rotationYPad();
	void moveBall();
	void moveBx();
	void rotationY();
	void moveBy();
	void restartGame();
	int scored();
	void ready();


private:

	int _directionX;
	int _directionY;
	int _ruptGx;
	int _ruptDx;
	int _ruptGy;
	int _ruptDy;
	int _ruptGmilieu;
	int _ruptDmilieu;
	bool _stopMots;
	int _score;

	// Position de la balle 
	int _positionX;
	int _positionY;
	int _deplacementX;
	int _deplacementY;
	//vitesse de la balle 
	int _speedX;
	int _speedY;
	int _pasX;
	int _pasY;
	//moteur axe X
	int _stepX;
	int _stepY;
	//moteur axe Y
	int x;
	int y;
	long int _lastimeX;
	long int _lastimeY;
	int pasRes;
	int speedRes;
	long int lastRes;
	int restart;
	int _boutonJ1;
	long int lastmillis;
	int _boutonJ2;
};

#endif
