#pragma once

class ContadorDeSol
{
private:
	//propiedades o atributos

	char forma; //cuadrado
	char color; //café 
	int cantidadSoles;

public:
	//constructor
	ContadorDeSol();

	//metodos accesores
	void setForma(char _forma) { forma = _forma; }
	char getForma() { return forma; }

	void setColor(char _color) { color = _color; }
	char getColor() { return color; }

	void setCantidadSoles(int _cantidadSoles) { cantidadSoles = _cantidadSoles; }
	int getCantidadSoles() { return cantidadSoles; }






	//metodos o funciones

	void acumularSoles();
	void incrementar();
	void decrementar();
	void mostrarTotalSoles();
	void gestionarSoles();
	void gastarSoles();
	void actualizarVisualizacion();
};

