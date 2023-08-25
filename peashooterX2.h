#pragma once
#include "peashooter.h"
class peashooterX2 : public peashooter
{
private:
	int dañoxSegundo;

public:
	//Constructor
	peashooterX2();

	//metodo accesor
	void setDañoxSegundo(int  _dañoxSegundo) { dañoxSegundo = _dañoxSegundo; }
	int getDañoxSegundo() { return dañoxSegundo; }

	//metodo propio
	void disparar2xS();
};

