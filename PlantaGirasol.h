#pragma once
#include "Planta.h"
class PlantaGirasol :
    public Planta
{
    //propiedades o atributos
    int producciónDeSoles;

    //METODOS CONSTRUCTORES------------------------------------------------------
    PlantaGirasol();
    PlantaGirasol(string, int, string, string);
    
    //METODOS ACCESORES (set y get)--------------------------------------------
    void setProducciónDeSoles(int _producciónDeSoles) { producciónDeSoles = _producciónDeSoles; }
    int getProducciónDeSoles() { return producciónDeSoles; }
};

