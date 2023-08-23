#pragma once
#include <iostream>

using namespace std;

class Rastrillo
{
	//propiedades o atributos
	string color;
	int tamanio;
	int posicion;
	int durabilidad;
	int costo;   //se puede comprar

	//metodos o funciones
	void atacar();
	void configurarDurabilidad();
	void comprar();
};

