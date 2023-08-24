#pragma once
#include <iostream>

using namespace std;

class GameManager    //administrador del juego
{
private:
	//propiedades o atributos
	string inicio;
	int nivelActual;
	string dificultad;
	int puntuacion;
	string jardin;
	string semillaDePlantas;
	string registroDeZombis;
	string estadoJuego;
	string recurso;
	string herramienta;

public: 
	//metodos o funciones

	//METODOS CONSTRUCTORES------------------------------------------------------
	//GameManager();
	GameManager();   //con datos pre-establecidos
	GameManager(int _nivelActual, string _dificultad, int _puntuacion, string _jardin, string _semillasDePlantas, string _estadoJuego, string _recurso, string _herramienta);

	//METODOS ACCESORES (set y get)--------------------------------------------
	void setInicio(string _inicio) { inicio = _inicio; }
	string getInicio() { return inicio; }

	void setNivelActual(int _nivelActual) { nivelActual = _nivelActual; }
	int getNivelActual() { return nivelActual; }

	void setDificultad(string _dificultad) { dificultad = _dificultad; }
	string getDificultad() { return dificultad; }

	void setPuntuacion(int _puntuacion) { puntuacion = _puntuacion; }
	int getPuntuacion() { return puntuacion; }

	void setJardin(string _jardin) { jardin = _jardin; }
	string getJardin() { return jardin; }

	void setSemillaDePlantas(string _semillaDePlantas) { semillaDePlantas = _semillaDePlantas; }
	string getSemillaDePlantas() { return semillaDePlantas; }

	void setRegistroDeZombis(string _registroDeZombis) { registroDeZombis = _registroDeZombis; }
	string getRegistroDeZombis() { return registroDeZombis; }

	void setEstadoJuego(string _estadoJuego) { estadoJuego = _estadoJuego; }
	string getEstadoJuego() { return estadoJuego; }

	void setRecurso(string _recurso) { recurso = _recurso; }
	string getRecurso() { return recurso; }

	void setHerramienta(string _herramienta) { herramienta = _herramienta; }
	string getHerramienta() { return herramienta; }

	//METODOS PROPIOS O COMUNES--------------------------------------------
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


