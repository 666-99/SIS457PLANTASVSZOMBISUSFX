#pragma once
#include "SpawnerDeSol.h"
class GirasolGenerador :
    public SpawnerDeSol
{
private:
    int tiempoTardado;

public:
    //constructor
    GirasolGenerador() {};

    //accesores
    void setTiempoTardado(int _tiempoTardado) { tiempoTardado = _tiempoTardado;  }
    int getTiempoTardado() { return tiempoTardado; }

    //funciones propias
    void darSol();


};

