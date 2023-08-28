#pragma once
#include <iostream>

using namespace std;

class contadordesol {
protected:
	char colour; //sol amarrillo
	char forma;//ventana superior lado izquierda
	int cantidad;
public:
	//Contructores
	contadordesol();

	contadordesol(char _colour, char _forma, int _cantidad);

	//Metodos accesores
	void colour(char _colour) { colour = _colour; }
	char getcolour() { return colour; }

	void setforma(char _forma) { forma = _forma; }
	char getforma() { return forma; }

	void setcantidad(int _cantidad) { cantidad = _cantidad; }
	int getcantidad() { return cantidad; }

};





	//metodos o funciones

	void acumularSoles();
	void incrementar();
	void decrementar();
	void mostrarTotalSoles();
	void gestionarSoles();
	void gastarSoles();
	void actualizarVisualizacion();
};

