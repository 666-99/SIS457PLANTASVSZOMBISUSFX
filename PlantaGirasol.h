#pragma once
#include "Planta.h"
class PlantaGirasol :
    public Planta
{
    //propiedades o atributos
    int producci�nDeSoles;

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaGirasol();
    PlantaGirasol(string, int, string, string);
    
    //METODOS ACCESORES (set y get)--------------------------------------------
    void setProducci�nDeSoles(int _producci�nDeSoles) { producci�nDeSoles = _producci�nDeSoles; }
    int getProducci�nDeSoles() { return producci�nDeSoles; }
};

