#include "SpawnerDeSol.h"

//METODOS CONSTRUCTORES------------------------------------------------------
SpawnerDeSol::SpawnerDeSol() {
	cantidad = 3;
	posicionX = 10.0f;
	posicionY = 07.0f;
	intervaloGenerar = 5;
}

SpawnerDeSol::SpawnerDeSol(int _cantidad, float _posicionX, float _posicionY, int _intervaloGenerar) {
	cantidad = _cantidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	intervaloGenerar = _intervaloGenerar;
}


//METODOS PROPIOS O COMUNES---------------------------------------------------
void SpawnerDeSol::activar() {
	//codigo
}

void SpawnerDeSol::desactivar(int _cantidad) {
	//codigo
}

void SpawnerDeSol::generarSol(float _posicionX, float _posicionY, int _cantidad, int _intervaloGenerar) {
	//codigo
}

void SpawnerDeSol::colisionObjetos() {
	//codigo
}

void SpawnerDeSol::actualizar(int _cantidad, float _posicionX, float _posicionY, int _intervaloGenerar) {
	//codigo
}

void SpawnerDeSol::configurarPosicion(float _posicionX, float _posicionY) {
	//codigo
}
