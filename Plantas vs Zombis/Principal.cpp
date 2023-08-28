#include <iostream>
#include "Menu.h"
#include "Zombi.h"
#include "Planta.h"
#include "GameManager.h"
#include "Escenario.h"
#include "BarraDeProgreso.h"
#include "Proyectil.h"
#include "SpawnerDeSol.h"
#include "SpawnerDeMoneda.h"
#include "SpawnerDeZombi.h"
#include "GameManager.h"
#include "GirasolGenerador.h"
#include "JuegoPersonalizado.h
#include "tarjetadeplant"
#include "AquaticNenufar.h"
#include "PlantLanzamaiz.h"
#include "Flowerpot.h"
#include "ZombieMinero.h"

using namespace std;

int main() {
	//Zombie Juanito("David", 30, 45, 23, 100.0f, 300.0f, "Destructos de puertas");
	Zombi Juanito("Juancho");
	//Juanito.setNombre("Juanito");

	cout << "El nombre del zombie es: " << Juanito.getNombre() << endl;
	cout << "La velocidad del zombie es: " << Juanito.getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << Juanito.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Juanito.getPosicionY() << endl;


	Menu Salir;
	Salir.activarOpcion();

	BarraDeProgreso aumento;
	aumento.finalizar();
	aumento.iniciar();

	Proyectil guisante;
	guisante.visualizarProyectil();

	//-------------------------creando objetos------------
	cout << "--------------OBJETOS---------------" << endl;
	cout << endl;
	cout << "--------------Objeto Spawner de Sol " << endl;
	SpawnerDeSol Solesitos;
	Solesitos.generarSol(2.0f, 12.0f, 4, 7);
	cout << "La posicion X del sol es generado es: " << Solesitos.getPosicionX() << endl;
	cout << "La posicion Y del sol es generado es: " << Solesitos.getPosicionY() << endl;
	cout << endl;
	cout << "-------------Objeto Game Manager----Juego------ " << endl;
	GameManager JuegoPvZ;
	JuegoPvZ.setInicio ("menu");
	JuegoPvZ.setNivelActual (7);
	JuegoPvZ.setDificultad("dificil");
	JuegoPvZ.setPuntuacion (242);
	JuegoPvZ.setJardin("noche");
	JuegoPvZ.setSemillaDePlantas ("Menu_Plantas");
	JuegoPvZ.setRegistroDeZombis ("Menu_Zombis");
	JuegoPvZ.setEstadoJuego ("en-juego");
	JuegoPvZ.setRecurso ("plata");
	JuegoPvZ.setHerramienta ("puerta");
	
	cout << "El nivel del juego esta en: " << JuegoPvZ.getNivelActual() << endl;
	cout << "La dificultad del juego esta en: " << JuegoPvZ.getDificultad() << endl;
	JuegoPvZ.actualizarPuntuación();
	cout << endl;

		cout << "--------------CLASES HIJAS---------------" << endl;
	cout << endl;
	GirasolGenerador SolDePlanta;
	SolDePlanta.generarSol(2.0f, 12.0f, 4, 7);
	cout << "La posicion X del sol es generado es: " << SolDePlanta.getPosicionX() << endl;
	cout << "La posicion Y del sol es generado es: " << SolDePlanta.getPosicionY() << endl;
	SolDePlanta.darSol();
	cout << endl;


	JuegoPersonalizado MiJuego;
	MiJuego.colocarSonido();
	cout << "El nivel del juego esta en: " << MiJuego.getNivelActual() << endl;
	cout << "La dificultad del juego esta en: " << MiJuego.getDificultad() << endl;
	MiJuego.actualizarPuntuación();
	cout << endl;
	
	Planta Sunflower;
	Sunflower.atacar();
	Sunflower.morir();
	cout << endl;
		
	tarjetadeplant carta("PLANTA"); //nombre que llevara la planta
	cout << "El nombre de la tarjeta de planta es: " << carta.getNombre() << endl;
	cout << "La forma de la tarjeta es: " << carta.getforma() << endl;
	cout << "el costo de la tarjeta es: " << carta.getcosto() << endl;
	cout << "Tiempo de reutilisacion es: " << carta.gettimecarga() << endl;	

		cout << "-------------HERENCIA Y POLIMORFISMO----------- " << endl;

	AquaticNenufar Nenufar;
	Nenufar.actualizarEstado();
	cout << endl;

	PlantLanzamaiz LanzaMaiz_1;
	LanzaMaiz_1.lanzarGuisante();
	cout << endl;
	
	Flowerpot Maceta1;
	Maceta1.verificarEstado();
	cout << endl;

	ZombieMinero Minero1;
	Minero1.atacar();
	cout << endl;
	
	return 0;

}
