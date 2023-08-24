#pragma once
#include <iostream>
using namespace std;
class Proyectil
{
private:	
	//propiedades
	int tamaño;
	int tipoProyectil;
	char color;

public:
	//constructor
	Proyectil();

	//metodos accesores
	void setTamaño(int _tamaño) { tamaño = _tamaño; }
	int getTamaño() { return tamaño; }

	void setTipoProyectil(int _tipoProyectil) { tipoProyectil = _tipoProyectil; }
	int getTipoProyectil() { return tipoProyectil; }

	void setColor(char _color) { color = _color; }
	char getColor() { return color; }
	
	
	//funciones
	void visualizarProyectil();
	void velocidad();
};

