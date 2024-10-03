#include "Persona.hpp"
#include <iostream>
using namespace std;


Persona::Persona(int e) {
	edad=e;
	genero=rand() % 2;
	generarDNI();
}
		
Persona::~Persona() {}
	
void Persona::setEdad(int e) {
	edad=e;
}
int Persona::getEdad(){	
	return edad;
}
bool Persona::esMujer(){
	return genero==1;
}


void Persona::mostrar(){
	
	string generoString;
	
	if (esMujer()) {
		generoString = "Mujer";
	} else {
		generoString = "Hombre";
	}
	
	cout << "Edad: " << edad << ", Genero: " << generoString << ", DNI: " << dni << endl;
}
	
void Persona::generarDNI() {
	for (int i = 0; i < 8; ++i) {
		dni[i] = '0' + rand() % 10;  
	}
	dni[8] = 'A' + rand() % 26; 
	dni[9] = '\0'; 
}
