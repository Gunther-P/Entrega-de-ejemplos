#include "Persona.hpp"
#include <iostream>
using namespace std;

int main(){
	
	srand(time(0));
	
	Persona* personas[10];
	
	for (int i = 0; i <= 10; ++i) {
		int edad=18+i;
		personas[i]=new Persona(edad);	
    }

    for (int i = 0; i < 10; ++i) {
        personas[i]->mostrar();
    }

    for (int i = 0; i < 10; ++i) {
        delete personas[i];
    }

    return 0;
}
