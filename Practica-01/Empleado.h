#pragma 
#include <iostream>
#include "Persona.h"
class Empleado : public Persona 
{
private: 
	float sueldo; 
	std::string cargo;
public: 
	Empleado(std::string, int, float, std::string);
	void mostrarDatos(); // polimorfismo
};

