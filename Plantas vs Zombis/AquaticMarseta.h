#pragma once
#include "PlantaAcuatica.h"
class AquaticMarseta :
    public PlantaAcuatica
{
    string tipoAmbiente = "nocturna y acuatica";
    int alcanceDeAtaque = 3;
    string estadoAtaque;

public:
    //Contructores
    AquaticMarseta(){};

    //Metodos accesores
    void setTipoAmbiente(string _tipoAmbiente) { tipoAmbiente = _tipoAmbiente; }
    string getTipoAmbiente() { return tipoAmbiente; }

    void setAlcanceDeAtaque(int _alcanceDeAtaque) { alcanceDeAtaque = _alcanceDeAtaque; }
    int getAlcanceDeAtaque() { return alcanceDeAtaque; }

    void setEstadoAtaque(string _estadoAtaque) { estadoAtaque = _estadoAtaque; }
    string getEstadoAtaque() { return estadoAtaque; }

    //Metodos propios
    void despertarDeDia();
    void atacarEnemigoMasCercano();

};

