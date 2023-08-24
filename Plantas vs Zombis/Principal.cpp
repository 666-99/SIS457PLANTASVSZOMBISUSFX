#include <iostream>
#include "Menu.h"
#include "Zombi.h"
#include "Planta.h"
#include "GameManager.h"
#include "Escenario.h"
#include "BarraDeProgreso.h"
#include "Proyectil.h"
using namespace std;

int main() {
	Zombi Armando;
	Armando.atacar();


	Menu Salir;
	Salir.activarOpcion();

	BarraDeProgreso aumento;
	aumento.finalizar();
	aumento.iniciar();

	Proyectil guisante;
	guisante.visualizarProyectil();

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
	
	return 0;

}
