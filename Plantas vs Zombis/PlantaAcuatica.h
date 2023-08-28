#pragma once
#include "Planta.h"
class PlantaAcuatica :
    public Planta
{
    float posicionAguaX;
    float posicionAguaY;
    string interaccion;  //una planta se planta encima de otra planta

public:
	//Contructores
	PlantaAcuatica() {};

	//Metodos accesores
	void setPosicionAguaX(float _posicionAguaX) { posicionAguaX = _posicionAguaX; }
	float getPosicionAguaX() { return posicionAguaX; }
	
	void setPosicionAguaY(float _posicionAguaY) { posicionAguaY = _posicionAguaY; }
	float getPosicionAguaY() { return posicionAguaY; }

	void setInteraccion(string _interaccion) { interaccion = _interaccion; }
	string getInteraccion() { return interaccion; }

	//Metodos propios
	void metodoDeAtaque();
	void efectosEspeciales();

};

