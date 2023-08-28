#pragma once
#include "Zombi.h"
class ZombieGlobo :
    public Zombi
{
    //string recursoGlobo;
    int velocidadVuelo;
    int alturaVuelo;
public:
    //constructores
    ZombieGlobo() {};

    //Metodos accesores
    void setVelocidadVuelo(int _velocidadVuelo) { velocidadVuelo = _velocidadVuelo; }
    int getVelocidadVuelo() { return velocidadVuelo; }

    void setAlturaVuelo(int _alturaVuelo) { alturaVuelo = _alturaVuelo; }
    int getAlturaVuelo() { return alturaVuelo; }

    //Metodo propio
    void atacar();   //poli........
    void volar();
};

