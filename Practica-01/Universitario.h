#pragma once
#include "Persona.h"

// Clase hija Universitario que hereda de clase padre Persona
class Universitario : public Persona{
private:
	std::string materia;
	std::string carrera;
	float notaFinal;
public:
	Universitario(std::string, int, std::string, std::string, float);
	void mostrarDatos();
};

