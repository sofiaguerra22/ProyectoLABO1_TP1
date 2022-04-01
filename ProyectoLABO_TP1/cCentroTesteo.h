#pragma once
#include <iostream>
#include <string>
#include "cLaboratorio.h"
using namespace std;

class cCentroTesteo
{
private:

	string ID, nombre;
	int comuna;
	bool completo_c;
	cPaciente* paciente; 
	cLaboratorio* laboratorio;

public:
	cCentroTesteo(string _ID, string _nombre, int _comuna, bool _completo_c);
	~cCentroTesteo();
	//getters
	void Asociarlaboratorio(cLaboratorio laboratorio, cPaciente paciente);
	void getAltaPaciente(cCentroTesteo centro1, cCentroTesteo centro2, cPaciente paciente);
	void getMandarTesteo();
	void BajaPaciente(cPaciente paciente);
	string to_string(int var_int);
	void Imprimir();
	string getNombre() { return nombre; };
	int getResultado(cPaciente* paciente);
	 
};

