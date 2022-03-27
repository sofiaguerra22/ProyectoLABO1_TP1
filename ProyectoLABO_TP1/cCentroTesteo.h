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
	bool completo;
	cPaciente* Paciente_c = NULL;
	cLaboratorio* Laboratorio_c = NULL;

public:
	cCentroTesteo(string _ID, string _nombre, int _comuna, bool _completo, cPaciente* _Paciente_c, cLaboratorio* _Laboratorio_c);
	~cCentroTesteo();
	//getters
	void getAsociarLaboratorio();//string Laboratorio_c.nombre);
	void getAltaPaciente();//string Paciente_c.nombre);
	void getMandarTesteo();
	void BajaPaciente();
};

/*cCentroTesteo::cCentroTesteo()
{
}

cCentroTesteo::~cCentroTesteo()
{
}*/