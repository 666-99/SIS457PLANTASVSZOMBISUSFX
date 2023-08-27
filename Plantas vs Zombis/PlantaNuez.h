#pragma once
#include "Planta.h"
class PlantaNuez :
    public Planta
{
    //propiedades o atributos
    int resistenciaExtra;

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaNuez();
    PlantaNuez(string, int, string, string);

    //METODOS ACCESORES (set y get)--------------------------------------------
    void setResistenciaExtra(int _resistenciaExtra) { resistenciaExtra = _resistenciaExtra; }
    int getResistenciaExtra() { return resistenciaExtra; }
};

