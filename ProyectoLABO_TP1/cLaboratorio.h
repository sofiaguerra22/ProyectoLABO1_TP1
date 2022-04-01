#pragma once
#include <iostream>
#include <string>
//#include "cPaciente.h"
using namespace std;
class cPaciente;
class cLaboratorio
{
private:
	string ID, nombre;
	int comuna;
	//cPaciente Paciente_l = NULL;
	bool completo_l;

public:
	cLaboratorio(string _ID, string _nombre, int _comuna, bool _completo_l);
	~cLaboratorio();
	//getters
	void getRecibirMuestra(cPaciente* Paciente) {

	}
	void CapacidadLaboratorio();
	bool getCompleto(); //devuelve si el laboratorio está completo
	void recibirMuestra(cPaciente paciente); //analiza si hay espacio para analizar la muestra
	int AnalisisMuestra(cPaciente paciente);
	void getAvisarPacientes();
	void to_string();
	void Imprimir();
	string getNombre();

	//setters, el codigo en si de las funciones 
};

