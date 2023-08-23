#pragma once

class SpawnerDeZombi    //generador de zombis
{
	//propiedades o atributos
	int posicion;
	int intervaloGenerar;
	int cantidad;
	char tipoZombi;
	int oleadaRestante;

	//metodos o funciones
	void iniciarOleada();
	void configurarTipoZombi();
	void generarZombi();
	void actualizar();
	void configurarPosicion();
	void configurarFrecuencia();
	void configurarCantidad();
};

