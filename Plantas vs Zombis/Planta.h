#pragma once
#include <iostream>

using namespace std;

class Planta
{
private:
	int energia = 100;
	int ataque = 10;

	string tipoPlanta;
	string nombre;



public:
	//Contructores
	Planta();
	Planta(string _nombre);
	Planta(string _nombre, int _energia, int _ataque, string _tipoPlanta);

	//Metodos accesores
	void setEnergia(int _energia) { energia = _energia; }
	int getEnergia() { return energia; }

	void setAtaque(int _ataque) { ataque = _ataque; }
	int getAtaque() { return ataque; }

	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setTipoPlanta(string _tipoPlanta) { tipoPlanta = _tipoPlanta; }
	string getTipoPlanta() { return tipoPlanta; }

	//Metodos propios

	void atacar();
	void morir();
};

