#pragma once
#include "PlantaNuez.h"
class PlantaAjo :
    public PlantaNuez
{
    //propiedades o atributos
    int resistenciaExtra;
    string habilidad;//El zombi se cambiara de carril

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaAjo();
    PlantaAjo(string, int, string, string);

    //METODOS ACCESORES (set y get)--------------------------------------------
    void setResistenciaExtra(int _resistenciaExtra) { resistenciaExtra = _resistenciaExtra; }
    int getResistenciaExtra() { return resistenciaExtra; }

    void setHabilidad(string _habilidad) { habilidad = _habilidad; }
    string getHabilidad() { return habilidad; }
};

