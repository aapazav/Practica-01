#pragma once
#include <iostream>

// Clase Base o Padre Persona
class Persona{
private:
	std::string nombre; // Atributo nombre
	int edad; // Atributo edad
public:
	Persona(std::string, int); // inicializando el constructor
	virtual void mostrarDatos(); // polimorfismo
};

