#pragma once
#include "Planta.h"
class PlantaPlantorcha :
    public Planta
{
    //propiedades o atributos
    string habilidad;//Duplica el daño de los lansaguisantes

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaPlantorcha();
    PlantaPlantorcha(string, int, string, string);

    //METODOS ACCESORES (set y get)--------------------------------------------
    
    void setHabilidad(string _habilidad) { habilidad = _habilidad; }
    string getHabilidad() { return habilidad; }
};

