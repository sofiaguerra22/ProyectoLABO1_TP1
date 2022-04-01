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
	int comuna, capacidad;
	cPaciente* paciente; 
	bool completo_l;

public:
	cLaboratorio(string _ID, string _nombre, int _comuna, bool _completo_l, int _capacidad);
	~cLaboratorio();
	//getters
	void getRecibirMuestra(cPaciente* paciente) {

	}
	void CapacidadLaboratorio();
	bool getCompleto(); //devuelve si el laboratorio está completo
	void recibirMuestra(cPaciente* paciente); //analiza si hay espacio para analizar la muestra
	int AnalisisMuestra(cPaciente* paciente);
	void getAvisarPacientes();
	string tostring(int var_int);
	void Imprimir();
	string getNombre();

	//setters, el codigo en si de las funciones 
};

