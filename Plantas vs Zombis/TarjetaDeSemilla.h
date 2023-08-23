#pragma once

class TarjetaDeSemilla
{
	//propiedades o atributos

	int tamanio;
	int color;
	char forma;
	char tipoPlanta;
	int cantidadTarjeta;
	int costo;
	int timeCarga;

	//metodos o funciones

	void seleccionarTarjeta();
	void comprarSemilla();
	void plantarSemilla();
	void activarTemporizador();
	void reiniciarTemporizador();
	void verificarDisponibilidad();
};

