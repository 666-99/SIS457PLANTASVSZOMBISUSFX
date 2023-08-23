#pragma once

class Moneda
{
	//propiedades o atributos
	char color;
	int tamaño;
	int valor;
	float posicion;
	char animacion;  //girar, brillar,.....


	//metodos o funciones
	void comprar();
	void visualizarMoneda();
	void establecerPosiciones();
	void gestionarAnimacion();
};

