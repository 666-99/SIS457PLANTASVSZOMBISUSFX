#pragma once
#include <iostream>

using namespace std;

class Zombi
{
private:
	//propiedades o atributos
	string nombre;
	int tamaño;//(alto y ancho)
	int Vida; //resistencia de 10 lanzaquisantes de plantas
	int posicion;
	string color;
	char tipoZombi;
	int rangoAtaque;
	int danio;
	char habilidad;
	char recurso;
	int recompensa;

public:
	//metodos o funciones
	void mover();
	void atacar();
	void aumentarVelocidad();
	void recibirDanio();
	void atacarConRecursos(); //con lazamientos,.....
	void realizarHabilidad(); //saltar
	void morir();
};

