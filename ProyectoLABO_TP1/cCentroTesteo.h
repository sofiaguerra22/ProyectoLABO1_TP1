#pragma once
#include <iostream>
#include <string>
#include "cPaciente.h"
#include "cLaboratorio.h"
using namespace std;

class cCentroTesteo
{
private:

	string ID, nombre;
	int comuna;
	bool completo_c;
	cPaciente* Paciente_c; 
	cLaboratorio* Laboratorio;

public:
	cCentroTesteo(string _ID, string _nombre, int _comuna, bool _completo_c);
	~cCentroTesteo();
	//getters
	void AsociarLaboratorio(cLaboratorio laboratorio, cPaciente paciente);//string Laboratorio_c.nombre);
	void getAltaPaciente(cCentroTesteo centro1, cCentroTesteo centro2, cPaciente paciente);
	void getMandarTesteo();
	void BajaPaciente(cPaciente paciente);
	void to_string();
	void Imprimir();
	string getNombre() { return nombre; };
	 
};

/*cCentroTesteo::cCentroTesteo()
{
}

cCentroTesteo::~cCentroTesteo()
{
}*/