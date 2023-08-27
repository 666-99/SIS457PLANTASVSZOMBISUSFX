#pragma once
#include "PlantaNuez.h"
class PlantaCalabaza :
    public PlantaNuez
{
    //propiedades o atributos
    int resistenciaExtra;
    string habilidad;//Se planta encima de otras plantas

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaCalabaza();
    PlantaCalabaza(string, int, string, string);

    //METODOS ACCESORES (set y get)--------------------------------------------
    void setResistenciaExtra(int _resistenciaExtra) { resistenciaExtra = _resistenciaExtra; }
    int getResistenciaExtra() { return resistenciaExtra; }

    void setHabilidad(string _habilidad) { habilidad = _habilidad; }
    string getHabilidad() { return habilidad; }
};

