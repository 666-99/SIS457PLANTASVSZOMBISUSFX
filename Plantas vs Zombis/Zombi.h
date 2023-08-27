#pragma once
#include <iostream>

using namespace std;

class Zombi
{
private:
	//propiedades o atributos
	string nombre;
	float tamanioAlto;
	float tamanioAncho;
	int energiaVida; //resistencia de 10 lanzaquisantes de plantas
	float posicionX;
	float posicionY; 
	string color;
	string tipoZombi;
	int velocidad;
	int nivelFuria;
	int rangoAtaque;
	int danio;
	string habilidad;
	string recurso;

public:
	//metodos o funciones

	//METODOS CONSTRUCTORES------------------------------------------------------
	Zombi();
	Zombi(string _nombre);
	Zombi(string _nombre, int _energiaVida, string _tipoZombi, int _velocidad, int _nivelFuria, int _habilidad);
	Zombi(string _nombre, float _tamanioAlto, float _tamanioAncho, int _energiaVida, float _posicionX, float _posicionY, string _color, string _tipoZombi, int _velocidad, int _nivelFuria,string _habilidad);

	//METODOS ACCESORES (set y get)--------------------------------------------
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setTamanioAlto(float _tamanioAlto) { tamanioAlto = _tamanioAlto; }
	float getTamanioAlto() { return tamanioAlto; }

	void setTamanioAncho(float _tamanioAncho) { tamanioAncho = _tamanioAncho; }
	float getTamanioAncho() { return tamanioAncho; }

	void setEnergiaVida(int _energiaVida) { energiaVida = _energiaVida; }
	int getEnergiaVida() { return energiaVida; }

	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setColor(string _color) { color = _color; }
	string getColor() { return color; }

	void setTipoZombi(string _tipoZombi) { tipoZombi = _tipoZombi; }
	string getTipoZombi() { return tipoZombi; }

	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	int getVelocidad() { return velocidad; }

	void setNivelFuria(int _nivelFuria) { nivelFuria = _nivelFuria; }
	int getNivelFuria() { return nivelFuria; }

	void setRangoAtaque(int _rangoAtaque) { rangoAtaque = _rangoAtaque; }
	int getRangoAtaque() { return rangoAtaque; }

	void setDanio(int _danio) { danio = _danio; }
	int getDanio() { return danio; }

	void setHabilidad(string _habilidad) { habilidad = _habilidad; }
	string getHabilidad() { return habilidad; }

	void setRecurso(string _recurso) { recurso = _recurso; }
	string getRecurso() { return recurso; }

	//METODOS PROPIOS O COMUNES--------------------------------------------
	void moverse();
	void moverse(float, float, int);

	void atacar();
	void atacar(string, int, int, int, int, string);

	void aumentarVelocidad();
	void aumentarVelocidad(float, float, int);

	void recibirDanio();
	void recibirDanio(int);

	void atacarConRecursos(); //con lazamientos,.....
	void atacarConRecursos(int, string, string);
	
	void realizarHabilidad(); //saltar
	void realizarHabilidad(int, string);
	
	void morir();
	void morir(int);
};
