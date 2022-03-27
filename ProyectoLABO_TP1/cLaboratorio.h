#pragma once
#include <iostream>
#include <string>
#include "cPaciente.h"
using namespace std;

class cLaboratorio
{
private:
	string ID, nombre;
	int comuna;
	cPaciente *Paciente_l = NULL;
	bool completo_l;

public:
	cLaboratorio(string _ID, string _nombre, int _comuna, cPaciente*_Paciente, bool _completo);
	~cLaboratorio();
	//getters
	void getRecibirMuestra(cPaciente* Paciente) {

	}
	void getAnalisisMuestra(){}
	void getAvisarPacientes(){}
	//setters, el codigo en si de las funciones 
};

/*cLaboratorio::cLaboratorio()
{
}

cLaboratorio::~cLaboratorio()
{
}*/