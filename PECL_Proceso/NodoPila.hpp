#include <iostream>
using namespace std;

class NodoPila{

public:
	NodoPila(Proceso v,NodoPila* sig = NULL);
	~NodoPila();
	
private:
	Proceso valor;
	NodoPila* siguiente;
	friend class Pila;
	friend class Proceso;
};

typedef NodoPila* pnodoPila;
