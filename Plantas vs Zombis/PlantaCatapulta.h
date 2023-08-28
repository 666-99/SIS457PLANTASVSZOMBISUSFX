#pragma once
#include "Planta.h"
class PlantaCatapulta :
    public Planta
{
    string tipoDeGuisante;
    string velocidadAerea;

public:
    //Contructores
    PlantaCatapulta() {};

    //Metodos accesores
    void setTipoDeGuisante(string _tipoDeGuisante) { tipoDeGuisante = _tipoDeGuisante; }
    string getTipoDeGuisante() { return tipoDeGuisante; }

    void setvelocidadAerea(string _velocidadAerea) { velocidadAerea = _velocidadAerea; }
    string getvelocidadAerea() { return velocidadAerea; }

    //Metodos propios
    void verificarAmenaza();
    void iniciarDisparo();
    void lanzarGuisante();

};

