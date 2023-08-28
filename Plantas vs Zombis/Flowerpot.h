#pragma once
#include "Planta.h"
class Flowerpot :
    public Planta
{
    float posicionX_Tejado;
    float posicionY_Tejado;
    //int costoDefinido = 25;
    string estado;  //ocupado desocupado;


public:
    //constructores
    Flowerpot() {};

    //Metodos accesores
    void setPosicionX_Tejado(float _posicionX_Tejado) { posicionX_Tejado = _posicionX_Tejado; }
    float getPosicionX_Tejado() { return posicionX_Tejado; }

    void setPosicionY_Tejado(float _posicionY_Tejado) { posicionY_Tejado = _posicionY_Tejado; }
    float getPosicionY_Tejado() { return posicionY_Tejado; }

    void setEstado(string _estado) { estado = _estado; }
    string getEstado() { return estado; }

    //Metodo propio
    void establecerPrecio();  
    void plantarEnTejado();
    void verificarEstado();
};

