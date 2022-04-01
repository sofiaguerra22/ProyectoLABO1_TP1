#pragma once
#include <iostream>
#include <string>
#include "cLaboratorio.h"
#include "cCentroTesteo.h"
using namespace std;
enum ResultadoTesteo { SINRESUL, POSITIVO, NEGATIVO };

class cPaciente
{
private:
	string nombre, apellido, DNI, telefono, nombre_laboratorio, nombre_centro;
	bool fiebre, tos, mocos, contactoEstrecho, dolorCabeza, dolorGarganta;
	int ResultadoTesteo;
	cCentroTesteo centro;
	cLaboratorio laboratorio;


public:
	cPaciente(string _nombre, string _apellido, string _DNI, string _telefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoEstrecho, bool _dolorCabeza, bool _dolorGarganta, int _resultado);
	~cPaciente();
	void setLaboratorio(string _laboratorio, cLaboratorio laboratorio);
	/*string getNombre() { return nombre; };
	string getApellido() { return apellido; };
	string getDNI() { return DNI; };
	string getTelefono(){ return telefono;};*/
	bool getFiebre() { return fiebre; };
	bool getTos() { return tos; };
	bool getMocos() { return mocos; };
	bool getContactoEstrecho() { return contactoEstrecho; };
	bool getDolorCabeza() { return dolorCabeza; };
	bool getDolorGarganta() { return dolorGarganta; };
	void setResultado(cLaboratorio laboratorio, cPaciente paciente);
	int getResultado() { return ResultadoTesteo; };
	void setCentro(cCentroTesteo centro);
	string getCentro() { return nombre_centro; };
	void imprimir();
};

