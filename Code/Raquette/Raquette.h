#ifndef Raquette_h
#define Raquette_h
#include <Arduino.h>

class Raquette{

public : 
	Raquette(char player,int direction, int step, int clk, int dt, int ruptG, int ruptD,int speed,int pas);
	void pinSetup();
	void movePaddle();
	void encodeur();
	void rotation(int _sens);
	bool hitCoin();
	void initPad(int dir);
	
	


private:
	char _player;

	int _direction;
	int _step;

	int _encodeurCLK;
	int _encodeurDT;

	
	int _ruptG;
	int _ruptD;

	int _lastCLK;
	long int _movePad;
	long int _lastime;
	int _newCLK;
	bool _actionMot;
	int _lastPad;
	int x;
	int _sens;
	int _pas;
	float _position;
	int _speed;
	int _lastsens;
	int _deplacement;


};

#endif