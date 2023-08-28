#include "tarjetadeplant.h"

tarjetadeplant::tarjetadeplant()
{
	forma = 2 * 3;
	arrastre = 0;
	costo = 0;
	timecarga = 00;
	nombre = "nombre de la tarjeta de planta";

}
tarjetadeplant::tarjetadeplant(string _nombre)
{

	forma =2*3 ;
	arrastre = 1;//comando con el public void OnMauseDrag
	costo = 500;
	timecarga = 300;
	nombre = _nombre;
}
tarjetadeplant::tarjetadeplant(string _nombre, int _costo, int _arrastre, char _color, int _timecarga, char _forma)
{
	forma = _forma;
	costo = _costo;
	arrastre = _arrastre;
	timecarga = _timecarga;
	nombre = _nombre;
}
