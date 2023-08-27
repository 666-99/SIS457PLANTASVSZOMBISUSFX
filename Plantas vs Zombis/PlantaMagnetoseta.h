#pragma once
#include "Planta.h"
class PlantaMagnetoseta :
    public Planta
{
    //propiedades o atributos
    string habilidad;//Quita los objetos metalicos de los zombis

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaMagnetoseta();
    PlantaMagnetoseta(string, int, string, string);

    //METODOS ACCESORES (set y get)--------------------------------------------

    void setHabilidad(string _habilidad) { habilidad = _habilidad; }
    string getHabilidad() { return habilidad; }
};

