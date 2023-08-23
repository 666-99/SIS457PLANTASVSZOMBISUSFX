#pragma once
#include <iostream>

using namespace std;

class Calle
{
	//propiedades o atributos
	int posicion;
	int ancho;
	int alto;
	char terreno;
	string color;
	char fondo;

	//metodos o funciones
	void dibujarCalle();
	void contenedor();
	void agregarZombi();
};

