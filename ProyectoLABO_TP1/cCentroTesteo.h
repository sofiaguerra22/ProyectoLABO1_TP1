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
	void Asociarlaboratorio(cLaboratorio* laboratorio, cPaciente* paciente);
	void AltaPaciente(cCentroTesteo* centro1, cCentroTesteo* centro2, cPaciente* paciente);
	void getMandarTesteo();
	void BajaPaciente(cPaciente* paciente);
	string tostring(int var_int);
	void Imprimir();
	string getNombre() { return nombre; };
	int getResultado(cPaciente* paciente);
	 
};

