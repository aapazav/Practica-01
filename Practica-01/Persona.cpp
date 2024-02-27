#include "Persona.h"

// Implementación del constructor de la clase Padre Persona
Persona::Persona(std::string _nombre, int _edad) : nombre(_nombre) , edad(_edad) {}

// Métodos de la clase Persona
void Persona::mostrarDatos() {
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Edad: " << edad << std::endl;
}