#pragma once
#include "PlantaAcuatica.h"
class AquaticNenufar :
    public PlantaAcuatica
{
    bool estado;   //ocupado, desocupado

public:
	//Contructores
	AquaticNenufar() {};

	//Metodos accesores
	void setEstado(bool _estado) { estado = _estado; }
	bool getEstado() { return estado; }

	//Metodos propios
    void soporteDePlantas();
	void actualizarEstado();

};

