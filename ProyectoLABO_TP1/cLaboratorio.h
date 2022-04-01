#pragma once
#include <iostream>
#include <string>
using namespace std;
class cCentroTesteo;
class cPaciente; 
class cLaboratorio
{
private:
	string ID, nombre;
	int comuna, capacidad, resultado;
	cPaciente* paciente; 
	bool completo_l;

public:
	cLaboratorio(string _ID, string _nombre, int _comuna, bool _completo_l, int _capacidad, int _resultado);
	~cLaboratorio();
	//getters
	void getRecibirMuestra(cPaciente* paciente) {
	}
	void LaboratorioCompleto();
	void CapacidadLaboratorio();
	bool getCompleto(); //devuelve si el laboratorio está completo
	int AnalisisMuestra(cPaciente* paciente);
	string AvisarPacientes(int resultado);
	bool RecibirMuestra(cLaboratorio* laboratorio, cPaciente* paciente);
	string tostring(int var_int);
	void imprimir_l();
	string getNombre();

	//setters, el codigo en si de las funciones 
};

