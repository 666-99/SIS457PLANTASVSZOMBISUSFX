#pragma once
#include "GameManager.h"
class JuegoPersonalizado :
    public GameManager
{
private: 
    string colorFondo;
    string sonido;
public:
    //constructor
    JuegoPersonalizado() {};
    
    //accesores
    void setColorFondo(string _colorFondo) { colorFondo = _colorFondo; }
    string getColorFondo() { return colorFondo; }

    void setSonido(string _sonido) { sonido = _sonido; }
    string getSonido() { return sonido; }

    //funciones 
    void colocarSonido();
};

