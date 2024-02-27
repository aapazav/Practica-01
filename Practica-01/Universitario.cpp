#include "Universitario.h"

Universitario::Universitario(std::string _nombre, int _edad, std::string _materia, std::string _carrera, float _notaFinal)
	:Persona(_nombre, _edad), materia(_materia), carrera(_carrera), notaFinal(_notaFinal) {}

void Universitario::mostrarDatos() {
	Persona::mostrarDatos();
	std::cout << "Materia: " << materia << std::endl;
	std::cout << "Carrera: " << carrera << std::endl;
	std::cout << "Nota final: " << notaFinal << std::endl;
}
