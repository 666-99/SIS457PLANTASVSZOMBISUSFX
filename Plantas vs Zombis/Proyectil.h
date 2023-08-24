#pragma once
#include <iostream>
using namespace std;
class Proyectil
{
private:	
	//propiedades
	int tama�o;
	int tipoProyectil;
	char color;

public:
	//constructor
	Proyectil();

	//metodos accesores
	void setTama�o(int _tama�o) { tama�o = _tama�o; }
	int getTama�o() { return tama�o; }

	void setTipoProyectil(int _tipoProyectil) { tipoProyectil = _tipoProyectil; }
	int getTipoProyectil() { return tipoProyectil; }

	void setColor(char _color) { color = _color; }
	char getColor() { return color; }
	
	
	//funciones
	void visualizarProyectil();
	void velocidad();
};

