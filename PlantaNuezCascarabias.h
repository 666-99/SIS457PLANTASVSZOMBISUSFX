#pragma once
#include "PlantaNuez.h"
class PlantaNuezCascarabias :
    public PlantaNuez
{
    //propiedades o atributos
    int resistenciaExtra;
    string habilidad;//Ningun zombi puede saltar sobre ella

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaNuezCascarabias();
    PlantaNuezCascarabias(string, int, string, string);

    //METODOS ACCESORES (set y get)--------------------------------------------
    void setResistenciaExtra(int _resistenciaExtra) { resistenciaExtra = _resistenciaExtra; }
    int getResistenciaExtra() { return resistenciaExtra; }

    void setHabilidad(string _habilidad) { habilidad = _habilidad; }
    string getHabilidad() { return habilidad; }
};

