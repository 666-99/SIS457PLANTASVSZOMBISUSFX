#pragma once

class SpawnerDeSol    //generador de soles
{
private:
	//propiedades o atributos
	//int cantidad;
	
protected:
	int cantidad;
	float posicionX;
	float posicionY;
	int intervaloGenerar;

public:
	//metodos o funciones

	//METODOS CONSTRUCTORES------------------------------------------------------
	SpawnerDeSol();
	SpawnerDeSol(int, float, float, int);

	//METODOS ACCESORES (set y get)--------------------------------------------
	void setCantidad(int _cantidad) { cantidad = _cantidad; }
	int getCantidad() { return cantidad; }

	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setIntervaloGenerar(int _intervaloGenerar) { intervaloGenerar = _intervaloGenerar; }
	int getIntervaloGenerar() { return intervaloGenerar; }
	
	//METODOS PROPIOS O COMUNES--------------------------------------------
	void activar();
	void desactivar(int);
	void generarSol(float, float, int, int);
	void colisionObjetos();
	void actualizar(int, float, float, int);
	void configurarPosicion(float, float);
};
