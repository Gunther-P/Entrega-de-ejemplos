#include <iostream>
#include <string>
using namespace std;

class Proceso {
public:
	Proceso();
	~Proceso();
	
	bool EsNormal();
	bool EstaParado();
	int getPID();
	string getNombreUsuario();
	int getPrioridad();
	
	void generarPrioridad();
	void generarNombreUsuario();
	void mostrar();
	
private:
	bool es_normal; //2 tipos de procesos, normal y a tiempo real
	int PID; // número de proceso único. Debe ser menor que 300
	string nombre_usuario; //nombre del usuario que lanzó el proceso
	bool esta_parado; //2 posibles estados, ejecución o parado
	int prioridad; //A los procesos normales se les asignará un número único comprendido entre -19 y +19 y a los procesos en tiempo real se les asignará un número único comprendido entre 0 y 99. 
	               //A los procesos normales, se le aplicará el siguiente calculo antes de encolar: prioridad = 120 + prioridad de un proceso normal
};


