#pragma once
#include <iostream>

using namespace std;

class tarjetadeplant
{
private:

	int timecarga;
	int costo;
	string nombre;

protected:
	int arrastre;
	char forma;
	char color;

public:
	//Contructores
	tarjetadeplant();

	tarjetadeplant(string _nombre);
	tarjetadeplant(string _nombre, int _costo, int _arrastre, char _color, int _timecarga, char _forma);
	//metodos accesores
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }
	void setcosto(int _costo) { costo = _costo; }
	int getcosto() { return costo; }
	void setarrastre(int _arrastre) { arrastre = _arrastre; }
	int getarrastre() { return arrastre; }
	void setcolor(char _color) { color = _color; }
	char getcolor() { return color; }
	void settimecarga(int _timecarga) { timecarga = _timecarga; }
	int gettimecarga() { return timecarga; }
	void setforma(char _forma) { forma = _forma; }
	char getforma() { return forma; }

	//metodos propios
	void seleccionarTarjeta();
	void comprarSemilla();
	void plantarSemilla();
	void activarTemporizador();
	void reiniciarTemporizador();
	void verificarDisponibilidad();

};
