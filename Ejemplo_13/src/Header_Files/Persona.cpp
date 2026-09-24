#include "Persona.hpp"
#include <iostream>
#include <cstdlib> 
#include <cstdio>
using namespace std;

Persona::Persona(int edad) {
    this->edad = edad;
    
    this->genero = rand() % 2; 
    
	for (int i = 0; i < 8; ++i) {
		this->dni[i] = '0' + (rand() % 10); 
	}

	this->dni[8] = 'A' + (rand() % 26);

	this->dni[9] = '\0';
}

Persona::~Persona() {
}

int Persona::getEdad() {
    return this->edad;
}

bool Persona::esMujer() {
    return this->genero;
}

void Persona::setEdad(int nuevaEdad) {
    this->edad = nuevaEdad;
}

void Persona::mostrar() {
    cout << " DNI: " << this->dni 
		 << " Edad: " << this->edad 
		 << " Genero: " << (this->genero ? "Mujer" : "Hombre") 
	     << endl;
}

