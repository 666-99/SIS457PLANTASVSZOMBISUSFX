#include "Planta.h"

Planta::Planta()
{
	energia = 100;
	ataque = 10;
	tipoPlanta = "Planta comun";
	nombre = "Planta anonima";
}

Planta::Planta(string _nombre)
{
	energia = 100;
	ataque = 10;
	tipoPlanta = "Planta normal";
	nombre = _nombre;
}

Planta::Planta(string _nombre, int _energia, int _ataque, string _tipoPlanta)
{
	energia = _energia;
	ataque = _ataque;
	tipoPlanta = _tipoPlanta;
	nombre = _nombre;
}
void Planta::atacar() {
	cout << " La planta esta atacando" << endl;
}
void Planta::morir() {
	cout << " Murio la planta" << endl;
}


