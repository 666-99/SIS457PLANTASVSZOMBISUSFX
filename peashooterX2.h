#pragma once
#include "peashooter.h"
class peashooterX2 : public peashooter
{
private:
	int da�oxSegundo;

public:
	//Constructor
	peashooterX2();

	//metodo accesor
	void setDa�oxSegundo(int  _da�oxSegundo) { da�oxSegundo = _da�oxSegundo; }
	int getDa�oxSegundo() { return da�oxSegundo; }

	//metodo propio
	void disparar2xS();
};

