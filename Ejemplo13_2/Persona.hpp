#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
using namespace std;
#include <string>


class Persona {
private:
    bool genero;  // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

public:
    Persona(int e);

    ~Persona();

    int getEdad();          
    bool esMujer();         
    void setEdad(int e);    
    void mostrar();         
    void generarDNI(); 
	
};
#endif