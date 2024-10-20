#include "Proceso.hpp"
#include <Pila.hpp>
#include <iostream>
using namespace std;

int main(){
	
	srand(time(0));
	
	Pila pila;
	Proceso* procesos[12];
	
	for (int i = 0; i < 12; ++i) {
		Proceso* a= new Proceso();
		procesos[i]= a;
		pila.insertar(*a);
    }

    for (int i = 0; i < 12; ++i) {
        procesos[i]->mostrar();
    }
	pila.mostrar();


    for (int i = 0; i < 12; ++i) {
        delete procesos[i];
    }

    return 0;
}
