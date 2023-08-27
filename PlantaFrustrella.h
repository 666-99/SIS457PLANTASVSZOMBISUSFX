#pragma once
#include "Planta.h"
class PlantaFrustrella :
    public Planta
{
    //propiedades o atributos
    string habilidad;//Dispara en 5 direcciones

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaFrustrella();
    PlantaFrustrella(string, int, string, string);

    //METODOS ACCESORES (set y get)--------------------------------------------

    void setHabilidad(string _habilidad) { habilidad = _habilidad; }
    string getHabilidad() { return habilidad; }
};

