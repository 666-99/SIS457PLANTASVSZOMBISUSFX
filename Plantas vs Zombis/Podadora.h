#pragma once
#include <iostream>

using namespace std;

class Podadora
{
	//propiedades o atributos
	std::string color;
	int tamanio;
	int posicion;
	int durabilidad;
	char efecto;

	//metodos o funciones
	void activacion();
	void eliminarAmenaza();  //toda la fila
};

