#pragma once

class Casa
{
private:
	//propiedades 

	int ubicacion;
	char forma; //rectángulo
	char color; //gris, café, amarillo. 
	int tamanio;
	bool entrada;  //abierto cerrado

private:
	//Constructor
	Casa();

	//Metodos accesores
	void setUbicacion(int _ubicacion) { ubicacion = _ubicacion; }
	int getUbicacion() { return ubicacion; }
	//metodos o funciones

	void visualizarEscenario();
	void AmenazaALaPuerta();
	void finalizarJuego();
};

