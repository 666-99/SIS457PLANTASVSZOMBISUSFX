#pragma once
#include "PlantaCatapulta.h"
class PlantColtapulta :
    public PlantaCatapulta
{
    string tipoDeGuisante = "coles";

public:
    //constructores
    PlantColtapulta() {};

    //Metodos accesores
    void setTipoDeGuisante(string _tipoDeGuisante) { tipoDeGuisante = _tipoDeGuisante; }
    string getTipoDeGuisante() { return tipoDeGuisante; }

    //Metodo propio
    void establecer_Velocidad_DeAtaque();  //poli......
};

