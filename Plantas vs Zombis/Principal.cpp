#include <iostream>
#include "Menu.h"
#include "Zombi.h"
#include "Planta.h"
#include "GameManager.h"
#include "Escenario.h"
#include "BarraDeProgreso.h"
using namespace std;

int main() {
	Zombi Armando;
	Armando.atacar();


	Menu Salir;
	Salir.activarOpcion();

	BarraDeProgreso aumento;
	aumento.finalizar();
	aumento.iniciar();
	
	return 0;

}
