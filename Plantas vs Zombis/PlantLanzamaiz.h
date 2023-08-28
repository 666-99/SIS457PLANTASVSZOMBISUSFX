#pragma once
#include "PlantaCatapulta.h"
class PlantLanzamaiz :
    public PlantaCatapulta
{
    string tipoDeGuisante = "maiz";
    int costoDefinido = 100;
    string municion;

public:
    //constructores
    PlantLanzamaiz() {};

    //Metodos accesores
    void setTipoDeGuisante(string _tipoDeGuisante) { tipoDeGuisante = _tipoDeGuisante; }
    string getTipoDeGuisante() { return tipoDeGuisante; }

    void setCostoDefinido(int _costoDefinido) { costoDefinido = _costoDefinido; }
    int getCostoDefinido() { return costoDefinido; }

    void setMunicion(string _municion) { municion = _municion; }
    string getMunicion() { return municion; }

    //Metodo propio
    void organizarAtaqueMezclado();  //maiz, mantequilla
    void lanzarGuisante();    //poli.......
};

