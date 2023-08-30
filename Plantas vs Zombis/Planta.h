#pragma once
#include <iostream>

using namespace std;

class Planta
{
private:
	//propiedades o atributos
	string nombre;
	float tamanioAlto;
	float tamanioAncho;
	int vida; //resistencia de 5 mordiscos de zombi
	float posicionX;
	float posicionY;
	string color;
	int costo; //soles
	string tipoPlanta; //girasol,, lanzaguisantes,.........
	int rangoAtaque;
	//int tiempoRecarga;
	string habilidad;

public:
	//metodos o funciones
	
	//METODOS CONSTRUCTORES------------------------------------------------------
	Planta();
	Planta(string, int, string, string);


	//METODOS ACCESORES (set y get)--------------------------------------------
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setTamanioAlto(float _tamanioAlto) { tamanioAlto = _tamanioAlto; }
	float getTamanioAlto() { return tamanioAlto; }

	void setTamanioAncho(float _tamanioAncho) { tamanioAncho = _tamanioAncho; }
	float getTamanioAncho() { return tamanioAncho; }

	void setVida(int _vida) { vida = _vida; }
	int getVida() { return vida; }

	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setColor(string _color) { color = _color; }
	string getColor() { return color; }

	void setCosto(int _costo) { costo = _costo; }
	int getCosto() { return costo; }

	void setTipoPlanta(string _tipoPlanta) { tipoPlanta = _tipoPlanta; }
	string getTipoPlanta() { return tipoPlanta; }

	void setRangoAtaque(int _rangoAtaque) { rangoAtaque = _rangoAtaque; }
	int getRangoAtaque() { return rangoAtaque; }

	void setHabilidad(string _habilidad) { habilidad = _habilidad; }
	string getHabilidad() { return habilidad; }

	//METODOS PROPIOS O COMUNES--------------------------------------------
	void definirMovimientoConstante();
	void definirMovimientoConstante(float, float);
	void atacar();
	void defender();
	void recibirDanio();
	void recibirDanio(int);
	void crecer();
	void producirRecursos(); //soles, monedas
	void realizarHabilidad();
	void morir();
	void morir(int); //termina su numero de vidas
};

