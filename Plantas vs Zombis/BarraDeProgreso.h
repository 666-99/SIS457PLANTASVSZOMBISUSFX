#pragma once

class BarraDeProgreso
{
private:
	//propiedades
	int posicion;
	int tamanio;
	int tiempo;
	int color;

public:
	//constructor
	BarraDeProgreso();

	//metodos accesores
	void setPosicion(int _posicion) { posicion = _posicion; }
	int getPosicion() { return posicion; }

	void setTamanio(int _tamanio) { tamanio = _tamanio; }
	int getTamanio() { return tamanio; }

	void setTiempo(int _tiempo) { tiempo = _tiempo; }
	int getTiempo() { return tiempo; }

	void SetColor(int _color) { color = _color; }
	int getColor() { return color; }




	//funciones
	void iniciar();
	void velocidad();
	void finalizar();
	void gestionarProgreso();
};

