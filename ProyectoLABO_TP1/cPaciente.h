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
	string nombre, apellido, DNI, telefono, nombre_centro, nombre_laboratorio;
	bool fiebre, tos, mocos, contactoEstrecho, dolorCabeza, dolorGarganta;
	int ResultadoTesteo;
	cCentroTesteo* centro;
	//cLaboratorio* laboratorio;


public:
	cPaciente(string _nombre, string _apellido, string _DNI, string _telefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoEstrecho, bool _dolorCabeza, bool _dolorGarganta, int _resultado);
	~cPaciente();
	void setLaboratorio(string _laboratorio);
	string getNombre() { return nombre; };
	/**string getApellido() { return apellido; };
	string getDNI() { return DNI; };
	string getTelefono(){ return telefono;};*/
	bool getFiebre() { return fiebre; };
	bool getTos() { return tos; };
	bool getMocos() { return mocos; };
	bool getContactoEstrecho() { return contactoEstrecho; };
	bool getDolorCabeza() { return dolorCabeza; };
	bool getDolorGarganta() { return dolorGarganta; };
	void setResultado(int resultado);
	int getResultado() { return ResultadoTesteo; };
	void setCentro(cCentroTesteo* centro);
	string getCentro() { return nombre_centro; };
	void imprimir_p();
	string tostring(int var_int);
	int ContadorSintomas();
};

