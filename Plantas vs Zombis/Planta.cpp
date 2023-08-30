#include "Planta.h"

//METODOS CONSTRUCTORES------------------------------------------------------

Planta::Planta() {
	nombre = "Planta de monedas";
	tamanioAlto = 7;
	tamanioAncho = 2;
	vida = 100;
	posicionX = 110.0f;
	posicionY = 50.0f;
	color = "amarillo";
	costo = 50;
	tipoPlanta = "Planta girasol";
	rangoAtaque = 3;
	habilidad = "escudo";
}

Planta::Planta(string _nombre, int _vida, string _tipoPlanta, string _habilidad) {
	nombre = _nombre;
	tamanioAlto = 5;
	tamanioAncho = 1;
	vida = _vida;
	posicionX = 187.0f;
	posicionY = 122.0f;
	color = "rojo";
	costo = 150;
	tipoPlanta = _tipoPlanta;
	rangoAtaque = 3;
	habilidad = _habilidad;
}

//METODOS PROPIOS O COMUNES---------------------------------------------------

void Planta::definirMovimientoConstante() {
	//codigo
}
void Planta::definirMovimientoConstante(float posicionSiguienteX, float posicionSiguienteY) {
	//cdigo
}

void Planta::atacar() {

	cout << "La planta esta atacando al enemigo causando el danio correspondiente" << endl;
}

void Planta::defender() {
	//codigo
}

void Planta::recibirDanio() {
	//codigo
}

void Planta::recibirDanio(int _cantidadDanio) {
	vida -= _cantidadDanio;
	if (vida <= 0) {
		cout << "La planta ha sido destruida." << endl;
	}
	else {
		cout << "La planta recibe " << _cantidadDanio << " puntos de danio. Su vida restante es: " << vida << endl;
	}
}

void Planta::crecer() {
	//codigo
}

void Planta::producirRecursos() {
	//codigo
}

void Planta::realizarHabilidad() {
	//codigo
}

void Planta::morir() {
	//codigo
}

void Planta::morir(int _energiaVida) {
	//codigo
}