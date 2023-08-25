#pragma once
#include "Planta.h"
class peashooter : public Planta
{
private:
	//Atributos propios
	int danio;

public:
	//Constructor
	peashooter();

	//metodo accesor
	void setDanio(int _danio) { danio = _danio; }
	int getDanio() { return danio; }

	//Metodos propios
	void disparar();
};

