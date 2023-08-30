#pragma once
#include "SpawnerDeSol.h"
#include <iostream>

using namespace std;

class GirasolGenerador :
    public SpawnerDeSol
{
protected:
    int tiempoTardado;
    int solGenerado;

public:
    //constructores
    GirasolGenerador() {};
    //accesores
    void setTiempoTardado(int _tiempoTardado) { tiempoTardado = _tiempoTardado; }
    int getTiempoTardado() { return tiempoTardado; }

    void setSolGenerado(int _solGenerado) { solGenerado = _solGenerado;  }
    int getSolGenerado() { return solGenerado; }

    //funciones propias
    void darSol();


};

