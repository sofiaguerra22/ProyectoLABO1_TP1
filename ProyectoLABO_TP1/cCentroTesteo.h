#pragma once
#include <iostream>
#include <string>
class cPaciente;
class cLaboratorio;
using namespace std;
class cPaciente; //forward declaration
class cCentroTesteo
{
private:

	string ID, nombre;
	int comuna, capacidad;
	bool completo_c;
	cPaciente* paciente; 
	cLaboratorio* laboratorio;

public:
	cCentroTesteo(string _ID, string _nombre, int _comuna, bool _completo_c, int _capacidad);
	~cCentroTesteo();
	//getters
	void CentroCompleto();
	bool AltaPaciente_c(cCentroTesteo* centro, cPaciente* paciente);
	void getMandarTesteo();
	void BajaPaciente(cPaciente* paciente);
	string tostring(int var_int);
	void imprimir_c();
	string getNombre() { return nombre; };
	int getResultado(cPaciente* paciente, cLaboratorio* laboratorio);
	 
};

