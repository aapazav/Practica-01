#include "Empleado.h"

// Implementación del constructor de la clase Empleado hija de Persona
Empleado::Empleado(std::string _nombre, int _edad, float _sueldo, std::string _cargo)
    : Persona(_nombre, _edad), sueldo(_sueldo), cargo(_cargo) {}

void Empleado::mostrarDatos() {
    Persona::mostrarDatos();
    std::cout << "Sueldo: " << sueldo << std::endl;
    std::cout << "Cargo: " << cargo << std::endl;
}
