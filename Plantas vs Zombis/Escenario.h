#pragma once

class Escenario
{
	//propiedades o atributos
	int dimension;
	char cuadricula;
	char fondo;
	char NivelActual;
	char obstaculo;
	char atcante;
	char iluminacion;


	//metodos o funciones

	void inicializar();
	void visualizarNitidezFondo();
	void agregarElemento();
	void eliminarElemento();
	void gestionarEventos();
	void vericarCondicionesDeVictoria_Derrota();
	void controlarTiempo();
	void interaccionGlobalDeObjetos();
	void guardarEstadoJuego();
};

