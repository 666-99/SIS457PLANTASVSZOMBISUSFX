#include "GameManager.h"

//METODOS CONSTRUCTORES------------------------------------------------------
//GameManager::GameManager() {
//
//}

GameManager::GameManager() {
	inicio = "menu";
	nivelActual = 7;
	dificultad = 4;
	puntuacion = 242;
	jardin = "dia";
	semillaDePlantas = "Menu_Plantas";
	registroDeZombis = "Menu_Zombis";
	estadoJuego = "pausado";
	recurso = "oro";
	herramienta = "pico";
}

GameManager::GameManager(int _nivelActual, string _dificultad, int _puntuacion, string _jardin, string _semillasDePlantas, string _estadoJuego, string _recurso, string _herramienta) {
	//inicio = 'menu';
	nivelActual = _nivelActual;
	dificultad = _dificultad;
	puntuacion = _puntuacion;
	jardin = _jardin;
	semillaDePlantas = _semillasDePlantas;
	//registroDeZombis = "Menu_Zombis";
	estadoJuego = _estadoJuego;
	recurso = _recurso;
	herramienta = _herramienta;
}


//METODOS PROPIOS O COMUNES--------------------------------------------
void GameManager::datosDelJugador() {
	//codigo
}

void GameManager::inciarJuego() {
	//codigo
}

void GameManager::SeleccionarPlantas() {
	//codigo
}

void GameManager::finalizarJuego() {
	//codigo
}

void GameManager::actualizar() {
	//codigo
}

void GameManager::actualizarPuntuación() {
	//codigo
}

void GameManager::comprarPlanta() {
	//codigo
}

void GameManager::gestionarSpawner() {
	//codigo
}

void GameManager::gestionarColisiones() {
	//codigo
}
