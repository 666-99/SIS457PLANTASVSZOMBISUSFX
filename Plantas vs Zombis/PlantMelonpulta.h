#pragma once
#include "PlantaCatapulta.h"
class PlantMelonpulta :
    public PlantaCatapulta
{
    string tipoDeGuisante = "sandia";

public:
    //constructores
    PlantMelonpulta() {};

    //Metodos accesores
    void setTipoDeGuisante(string _tipoDeGuisante) { tipoDeGuisante = _tipoDeGuisante; }
    string getTipoDeGuisante() { return tipoDeGuisante; }

    //Metodo propio
    void establecer_Velocidad_DeAtaque();
};

