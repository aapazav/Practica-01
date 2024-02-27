#include "Persona.h"
#include "Empleado.h"
#include <string>
#include <iostream>
#include "Universitario.h"

int main() {
	//Creando Objeto de la clase Persona
	Persona* persona1[3];
	persona1[0] = new Persona("Juan", 20);

	//Creando Objeto de la clase Empleado
	Empleado* empleado1[1];
	empleado1[0] = new Empleado("Pacheco", 30, 5000.00, "Docente");

	Universitario* universitario1[1];
	universitario1[0] = new Universitario("Joel", 15, "Calculo", "Ing Sistemas", 100);



	//Llamando a metodos
	persona1[0]->mostrarDatos();
	std::cout<<std::endl;
	empleado1[0]->mostrarDatos();
	std::cout << std::endl;
	universitario1[0]->mostrarDatos();
	

	
	return 0; 
}