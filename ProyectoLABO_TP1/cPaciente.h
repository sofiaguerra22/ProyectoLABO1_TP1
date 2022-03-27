#pragma once
#include <iostream>
#include <string>
using namespace std;
enum ResultadoTesteo { SINRESUL, POSITIVO, NEGATIVO };
class cPaciente
{
private:
	string nombre, apellido, DNI, telefono;
	bool fiebre, tos, mocos, contactoEstrecho, dolorCabeza, dolorGarganta;

public:
	cPaciente(string _nombre, string _apellido, string _DNI, string _telefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoEstrecho, bool _dolorCabeza, bool _dolorGarganta);
	~cPaciente();
};

/*cPaciente::cPaciente()
{
}

cPaciente::~cPaciente()
{
}*/
