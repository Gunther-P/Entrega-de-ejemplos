#include "Proceso.hpp"
#include <iostream>
using namespace std;

Proceso::Proceso()
{
	es_normal = rand() % 2;
	PID = rand()%700 + 300;
	esta_parado = true;
	generarPrioridad();
	generarNombreUsuario();
}

Proceso::~Proceso() {}

	bool Proceso::EsNormal(){	
		return es_normal;
	}
	int Proceso::getPID(){	
		return PID;
	}
	bool Proceso::EstaParado(){	
		return esta_parado;
	}
	int Proceso::getPrioridad(){	
		return prioridad;
	}
	string Proceso::getNombreUsuario(){	
		return nombre_usuario;
	}
	
	void Proceso::generarPrioridad() {
		if (es_normal){
			prioridad = 100 + rand()%40;
		} else{
			prioridad = rand()%100;
			}
	}
	void Proceso::generarNombreUsuario() {
		string nombres[12] = {"Alejandro","Beatriz","Carlos","Diana","Eduardo", "Javier", "Gabriel","Hugo","Isabel","Juan", "Carla","Luis"};
		nombre_usuario= nombres[rand()%12] + to_string(rand()%9999);
	}
	void Proceso::mostrar() {
		string tipo_de_proceso_string;
		string estado_string;
		
		if (es_normal){
			tipo_de_proceso_string="Normal";
		} else{
			tipo_de_proceso_string= "A tiempo real";
		}
		if (esta_parado){
			estado_string="Parado";
		} else{
			estado_string="En ejecución";
		}
		
		cout << "Tipo de proceso:" << tipo_de_proceso_string << ", PID:" << PID << ", Nombre de usuario:" << nombre_usuario << ", Estado:" << estado_string << ", Prioridad:" << prioridad << endl;
	}


