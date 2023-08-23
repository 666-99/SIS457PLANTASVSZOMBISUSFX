#pragma once

class SpawnerDeSol    //generador de soles
{
	//propiedades o atributos
	int cantidad;
	int intervaloGenerar;
	int posicion;


	//metodos o funciones
	void activar();
	void desactivar();
	void generarSol();
	void colisionObjetos();
	void actualizar();
	void configurarPosicion();
};

