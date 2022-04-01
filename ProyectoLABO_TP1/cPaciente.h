#pragma once
#include <iostream>
#include <string>
#include "cCentroTesteo.h"

using namespace std;
class cLaboratorio; //forward declaration
enum ResultadoTesteo { SINRESUL, POSITIVO, NEGATIVO };

class cPaciente
{
private:
	string nombre, apellido, DNI, telefono, nombre_centro;
	bool fiebre, tos, mocos, contactoEstrecho, dolorCabeza, dolorGarganta;
	int ResultadoTesteo;
	cCentroTesteo* centro;
	//cLaboratorio* laboratorio;


public:
	cPaciente(string _nombre, string _apellido, string _DNI, string _telefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoEstrecho, bool _dolorCabeza, bool _dolorGarganta, int _resultado, cCentroTesteo *_centro);
	~cPaciente();
	//void setLaboratorio(string _laboratorio, cLaboratorio laboratorio);
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
	void setResultado(cCentroTesteo* centro, cPaciente* paciente);
	int getResultado() { return ResultadoTesteo; };
	void setCentro(cCentroTesteo centro);
	string getCentro() { return nombre_centro; };
	void imprimir();
	string to_string(int var_int);
};

