#pragma once

class Temporizador
{
	//propiedades o atributos

	int contador;
	int duracion;
	int tiempoRestante;

	//metodos o funciones

	void comprobarActivacion();
	void iniciar();
	void finalizar();
	void reiniciar();
	void establecerDuracion();
};

