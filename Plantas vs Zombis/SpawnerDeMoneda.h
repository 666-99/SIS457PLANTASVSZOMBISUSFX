#pragma once

class SpawnerDeMoneda     //generador de monedas
{
	//propiedades o atributos
	int posicion;
	int tiempoDeGenerar;
	int cantidad;
	char tipoMoneda;

	//metodos o funciones
	void generarMoneda();
	void configurarTipoMoneda();
	void actualizar();
	void configurarPosicion();
	void configurarFrecuencia();
	void configurarCantidad();
};

