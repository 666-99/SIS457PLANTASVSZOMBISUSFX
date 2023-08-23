#pragma once

class Menu
{
	//propiedades o atributos
private:
	int numeroOpcion;
	char estado;
	int seleccionarOpcion;
	char fondo;
	
public:
	//Constructor
	Menu();

	//metodos accesores
	void setNumeroOpcion(int _numeroOpcion) { numeroOpcion = _numeroOpcion; }
	int getNumeroOpcion() { return numeroOpcion; }

	void setEstado(char _estado) { estado = _estado; }
	char getEstado() { return estado; }

	void setSeleccionarOpcion(int _seleccionarOpcion) { seleccionarOpcion = _seleccionarOpcion; }
	int getSeleccionarOpcion() { return seleccionarOpcion; }

	void setFondo(char _fondo) { fondo = _fondo; }
	char getFondo() { return fondo; }

public:
	//funciones o metodos
	void moverBarra();
	void activarOpcion();
	void mostrarOpcion();
	void ocultarMenu();
	void actualizarMenu();
	void cargarPantallas();
	void personalizacion();
	void salirDelJuego();

	
};

