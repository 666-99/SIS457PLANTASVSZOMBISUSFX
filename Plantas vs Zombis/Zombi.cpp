#include "Zombi.h"

//METODOS CONSTRUCTORES------------------------------------------------------

Zombi::Zombi() {
	nombre = "Zombi anonimo";
	tamanioAlto = 7.0f;
	tamanioAncho = 12.0f;
	energiaVida = 100;
	posicionX = 1000.0f;
	posicionY = 540.0f;
	color = "verde y plomo";
	tipoZombi = "Zombi Normal";
	velocidad = 30;
	nivelFuria = 20;
	rangoAtaque = 7;
	danio = 2;
	habilidad = "excavar";
	recurso = "pico";
}

Zombi::Zombi(string _nombre) {
	//....................
	nombre = _nombre;
	tamanioAlto = 7.0f;
	tamanioAncho = 12.0f;
	energiaVida = 100;
	posicionX = 1000.0f;
	posicionY = 540.0f;
	color = "verde y plomo";
	tipoZombi = "Zombi Normal";
	velocidad = 30;
	nivelFuria = 20;
	rangoAtaque = 7;
	danio = 2;
	habilidad = "excavar";
	recurso = "pico";
}

Zombi::Zombi(string _nombre, int _energiaVida, string _tipoZombi, int _velocidad, int _nivelFuria, int _habilidad) {
	nombre = _nombre;
	tamanioAlto = 7.0f;
	tamanioAncho = 12.0f;
	energiaVida = _energiaVida;
	posicionX = 1000.0f;
	posicionY = 540.0f;
	color = "verde y plomo";
	tipoZombi = _tipoZombi;
	velocidad = _velocidad;
	nivelFuria = _nivelFuria;
	rangoAtaque = 7;
	danio = 2;
	habilidad = _habilidad;
	recurso = "pico";
}

Zombi::Zombi(string _nombre, float _tamanioAlto, float _tamanioAncho, int _energiaVida, float _posicionX, float _posicionY, string _color, string _tipoZombi, int _velocidad, int _nivelFuria, string _habilidad) {
	nombre = _nombre;
	tamanioAlto = _tamanioAlto;
	tamanioAncho = _tamanioAncho;
	energiaVida = _energiaVida;
	posicionX = _posicionX;
	posicionY = _posicionY;
	color = _color;
	tipoZombi = _tipoZombi;
	velocidad = _velocidad;
	nivelFuria = _nivelFuria;
	rangoAtaque = 7;
	danio = 2;
	habilidad = _habilidad;
	recurso = "pico";
}


//METODOS PROPIOS O COMUNES---------------------------------------------------

void Zombi::moverse() {
	posicionX = 1;
	cout << "--------------------x--------------------------" << endl;
	for (int i = 0; i < 10; i++) {
		posicionX += posicionX * velocidad;
		cout << " Zombi moviendose en x :" << posicionX << endl;
	}
	cout << "---------xy-------------------------------------" << endl;
	posicionX = -1;
	posicionY = -1;
	for (int i = 0; i < 10; i++) {
		posicionX += posicionX * velocidad;
		posicionY += posicionY * velocidad;
		cout << " Zombi moviendose en x :" << posicionX << endl;
		cout << " Zombi moviendose en y :" << posicionY << endl;
	}

	posicionX = 1;
	posicionY = 0;
	for (int i = 0; i < 10; i++) {
		posicionX += posicionX * velocidad;
	}
}



void Zombi::moverse(float posicionSiguienteX, float posicionSiguienteY, int velocidadMover) {

}

void Zombi::atacar() {
	//codigo
}
void Zombi::atacar(string _tipoZombi, int _velocidad, int _nivelFuria, int _rangoAtaque, int _danio, string _habilidad) {

}

void Zombi::aumentarVelocidad() {
	//codigo
}
void Zombi::aumentarVelocidad(float _posicionX, float _posicionY, int _velocidad) {

}

void Zombi::recibirDanio() {
	//codigo
}
void Zombi::recibirDanio(int _danioRecibido) {

}

void Zombi::atacarConRecursos() {
	//codigo
}
void Zombi::atacarConRecursos(int _velocidad, string _habilidad, string _recurso) {

}

void Zombi::realizarHabilidad() {
	//codigo
}
void Zombi::realizarHabilidad(int _velocidad, string _habilidad) {

}

void Zombi::morir() {
	//codigo
}
void Zombi::morir(int _energiaVida) {

}