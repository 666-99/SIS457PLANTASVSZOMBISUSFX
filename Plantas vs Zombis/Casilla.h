#pragma once

class Casilla   //grilla de Tiles
{
	//propiedades o atributos

	int posicion;
	int numCasillas;
	int lim;
	char color; //verde
	bool estado;  //ocupado desocupado
	char contenido;


	//metodos o funciones

	void comprobarEstado();
	void añadirPlanta();
	void ocuparEspacio();
	void desocuparEspacio(); //quitar planta con la pala
	void actualizarEstado();
};

