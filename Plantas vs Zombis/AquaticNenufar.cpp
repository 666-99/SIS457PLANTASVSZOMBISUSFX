#include "AquaticNenufar.h"

void AquaticNenufar::soporteDePlantas() {
	// podemos plantar plantas encima de ella
}

void AquaticNenufar::actualizarEstado() {
	//codigo que nos muestre si esta ocupado o ya no para poder plantar
	setEstado(true);
	cout << "el nenufar esta desocupado por ahora" << endl;
}