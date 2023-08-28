#pragma once
#include "PlantaAcuatica.h"
class AquaticZampalga :
    public PlantaAcuatica
{
    int vidaTotal = 1;
    string ataqueMasivo = "masivo";

public:
    //Contructores
    AquaticZampalga() {};
    AquaticZampalga(int) {};

    //Metodos accesores
    void setVidaTotal(int _vidaTotal) { vidaTotal = _vidaTotal; }
    int getVidaTotal() { return vidaTotal; }

    void setAtaqueMasivo(string _ataqueMasivo) { ataqueMasivo = _ataqueMasivo; }
    string getAtaqueMasivo() { return ataqueMasivo; }

    //Metodos propios
    void succionarZombi();
    void efectosEspeciales();

};

