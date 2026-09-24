#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"
using namespace std;

int main() {
    srand(time(NULL));

	int num_personas = 10;
    Persona* personas[num_personas];

    for (int i = 0; i < num_personas; ++i) {
        int edadUnica = 18 + i;
        personas[i] = new Persona(edadUnica);
    }

    cout << "Lista de Personas" << endl;
    for (int i = 0; i < num_personas; ++i) {
        personas[i]->mostrar();
    }

    for (int i = 0; i < num_personas; ++i) {
        delete personas[i];
    }

    return 0;
}
