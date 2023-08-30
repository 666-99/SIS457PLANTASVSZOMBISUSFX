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
#include "JuegoPersonalizado.h"
#include "TarjetaDePlanta.h"
#include "AquaticNenufar.h"
#include "PlantLanzamaiz.h"
#include "Flowerpot.h"
#include "ZombieMinero.h"

using namespace std;

int main() {

	cout << endl << "***************************CREANDO OBJETOS NORMALES**************************" << endl;
	cout << endl;

	//Zombi Juanito("David", 30, 45, 23, 100.0f, 300.0f, "Destructor de puertas");
	Zombi Juanito("Juancho");
	//Juanito.setNombre("Juanito");

	cout << "El nombre del zombie es: " << Juanito.getNombre() << endl;
	cout << "La energia del zombie es: " << Juanito.getEnergiaVida() << endl;
	cout << "La velocidad del zombie es: " << Juanito.getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << Juanito.getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << Juanito.getPosicionY() << endl;
	cout << "El tipo de zombie es: " << Juanito.getTipoZombi() << endl;
	cout << endl;

	Menu Salir;
	Salir.activarOpcion();
	cout << endl;

	BarraDeProgreso aumento;
	aumento.finalizar();
	aumento.iniciar();
	cout << endl;

	Proyectil guisante;
	guisante.visualizarProyectil();
	cout << endl;

	////-------------------------creando objetos------------
	//cout << "--------------OBJETOS---------------" << endl;
	cout << endl;
	cout << "--------------Objeto Spawner de Sol " << endl;
	SpawnerDeSol Solesitos;
	Solesitos.generarSol(2.0f, 12.0f, 4, 7);
	cout << "La posicion X del sol es generado es: " << Solesitos.getPosicionX() << endl;
	cout << "La posicion Y del sol es generado es: " << Solesitos.getPosicionY() << endl;
	cout << endl;

	cout << "-------------Objeto Spawner de Moneda " << endl;
	SpawnerDeMoneda BonoDeMoneda(2.0f, 12.0f, 5, 3, "oro");
	cout << "La posicion X del spawner de moneda es: " << BonoDeMoneda.getPosicionX() << endl;
	cout << "La posicion Y del spawner de moneda es: " << BonoDeMoneda.getPosicionY() << endl;
	cout << "El tiempo que tardara en generarse cada moneda es: " << BonoDeMoneda.getTiempoDeGenerar() << endl;
	cout << "La cantidad de moneda que se generara es: " << BonoDeMoneda.getCantidad() << endl;
	cout << "El tipo de moneda que se generara es: " << BonoDeMoneda.getTipoMoneda() << endl;
	BonoDeMoneda.configurarTipoMoneda();
	cout << endl;

	cout << "-------------Objeto Spawner de Zombi " << endl;
	SpawnerDeZombi ZombiCreado;
	cout << "La posicion X del spawner de Zombi es: " << ZombiCreado.getPosicionX() << endl;
	cout << "La posicion Y del spawner de Zombi es: " << ZombiCreado.getPosicionY() << endl;
	cout << "El tiempo que tardara en generarse cada Zombi es: " << ZombiCreado.getIntervaloGenerar() << endl;
	cout << "La cantidad de Zombi que se generara es: " << ZombiCreado.getCantidad() << endl;
	cout << "El tipo de zombi que se generara es: " << ZombiCreado.getTipoZombi() << endl;
	cout << "El tipo de zombi que se generara es: " << ZombiCreado.getOleadaRestante() << endl;
	ZombiCreado.configurarCantidad(16);
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

	cout << "---------HERENCIA = CLASES HIJAS---------------" << endl;
	
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

	TarjetaDePlanta carta("PLANTA"); //nombre que llevara la planta
	cout << "El nombre de la tarjeta de planta es: " << carta.getNombre() << endl;
	cout << "La forma de la tarjeta es: " << carta.getforma() << endl;
	cout << "el costo de la tarjeta es: " << carta.getcosto() << endl;
	cout << "Tiempo de reutilisacion es: " << carta.gettimecarga() << endl;

	cout << "-------------OBJETOS DE HERENCIA Y POLIMORFISMO----------- " << endl;

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

	cout << "********************CREANDO OBJETOS CON USO DE PUNTEROS*******************" << endl;
	cout << "				  ciclo while infinito						" << endl;
	cout << endl;

	while (true) {
		//-------------ZOMBI------------
		cout << endl << ".............ZOMBI..............." << endl;

		Zombi* Mauricio = new Zombi();
		cout << "El zombi Mauricio se mueve en la posicion : " << endl;
		Mauricio->moverse();

		//-------------PLANTA------------
		cout << endl << ".............PLANTA..............." << endl;

		Planta* Lansaguisante = new Planta();
		Lansaguisante->setNombre("LansaguisanteDoble");
		Lansaguisante->setVida(33);
		cout << "La vida de la planta es: " << Lansaguisante->getVida() << endl;
		cout << "El nombre de la planta es: " << Lansaguisante->getNombre() << endl;
		cout << endl;
		Lansaguisante->atacar();
		Lansaguisante->recibirDanio(15);
		Lansaguisante->recibirDanio(18);

		//-------------GIRASOL GENERADOR------------
		cout << endl << ".............GIRASOL GENERADOR..............." << endl;

		GirasolGenerador* Girasol3 = new GirasolGenerador();
		Girasol3->setTiempoTardado(5);
		Girasol3->setSolGenerado(0);
		cout << "El tiempo que tarda el girasol en dar soles es: " << Girasol3->getTiempoTardado() << endl;
		cout << "Los soles que genera el girasol es: " << Girasol3->getSolGenerado() << endl;
		cout << endl;

		Girasol3->darSol();

		break;
	}

	return 0;
}
