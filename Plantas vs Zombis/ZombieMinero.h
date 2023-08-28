#pragma once
#include "Zombi.h"
class ZombieMinero :
    public Zombi
{
    string habilidadExtra;

public:
    //constructores
    ZombieMinero() {};

    //Metodos accesores
    void setHabilidadExtra(string _habilidadExtra) { habilidadExtra = _habilidadExtra; }
    string getHabilidadExtra() { return habilidadExtra; }

    //Metodo propio
    void cabarTierra();
    void salirA_Tierra();
    void DarVueltas();
    void atacar();   //poli........
};

