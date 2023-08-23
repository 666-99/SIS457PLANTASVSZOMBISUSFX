#pragma once
#include <iostream>

using namespace std;

class Planta
{
	//propiedades o atributos
	string nombre;
	int tamaño;//(alto y ancho)
	int Vida; //resistencia de 5 mordiscos de zombi
	int posicion = 5;
	string color;
	int costo; //soles
	char tipoPlanta; //girasol,, lanzaguisantes,.........
	int rangoAtaque;
	int tiempoRecarga;
	char habilidad;

	//metodos o funciones
	void mover();
	void atacar();
	void defender();
	void recibirDanio();
	void crecer();
	void producirRecursos(); //soles, monedas
	void realizarHabilidad();
	void morir(); //termina su numero de vidas
};

