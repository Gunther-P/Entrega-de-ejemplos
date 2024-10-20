#include "Pila.hpp"

Pila::Pila(){
	ultimo = NULL;
	longitud=0;
}
void Pila::insertar (Proceso v){
	pnodoPila nuevo;
	nuevo = new NodoPila (v, ultimo);
	ultimo = nuevo;
	longitud++;
}
Proceso Pila::extraer(){
	pnodoPila nodo;
	Proceso v;
	if(!ultimo)
		throw runtime_error("La pila está vacía, no se puede extraer nada");
	nodo = ultimo;
	ultimo =nodo->siguiente;
	v = nodo->valor;
	longitud--;
	delete nodo;
	return v;
}
Proceso Pila::cima(){
	pnodoPila nodo;
	if(!ultimo)
		throw runtime_error("La pila está vacía, no se puede ver la cima");
	return ultimo ->valor;
}
void Pila::mostrar(){
	pnodoPila aux = ultimo;
	cout << "\tEl contenido de la pila es: ";
	while (aux){
		cout << "->" << aux->valor.mostrar();
		aux = aux ->siguiente;
	}
	cout <<endl;
}
int Pila::getLongitud(){
	return this->longitud;
}
Pila::~Pila(){
	pnodoPila aux;
	while (ultimo){
		aux= ultimo;
		ultimo= ultimo->siguiente;
		delete aux;
	}
}