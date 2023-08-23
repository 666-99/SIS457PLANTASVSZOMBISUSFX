#pragma once

class ContadorDeMoneda
{
	//propiedades o atributos
	int ubicacion;
	char color;
	char forma;
	int cantidadMonedas;
	char animacion;

	//metodos o funciones
	void contar();
	void incrementar();
	void decrementar();
	int mostrarTotalMonedas();
	void aparecer();
	void desaparecer();
};

