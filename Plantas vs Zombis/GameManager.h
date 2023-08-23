#pragma once
#include <iostream>

using namespace std;

class GameManager    //administrador del juego
{
	//propiedades o atributos
	char inicio;
	int nivelActual;
	string dificultad;
	int puntuacion;
	char jardin;
	char SemillaDePlantas;
	char RegistroaDeZombis;
	string estadoJuego;
	char recurso;
	char herramienta;

	//metodos o funciones
	void datosDelJugador();
	void inciarJuego();
	void SeleccionarPlantas();
	void finalizarJuego();
	void actualizar();   //zombies, los spawner, las plantas......
	void actualizarPuntuación();
	void comprarPlanta();
	void gestionarSpawner();
	void gestionarColisiones();
};

