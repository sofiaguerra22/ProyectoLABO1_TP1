#include "cPaciente.h"
using namespace std;

cPaciente::cPaciente(string _nombre, string _apellido, string _DNI, string _telefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoEstrecho, bool _dolorCabeza, bool _dolorGarganta, int _resultado)
{
	nombre = _nombre;
	apellido = _apellido;
	DNI = _DNI;
	telefono = _telefono;
	fiebre = _fiebre;
	tos = _tos;
	mocos = _mocos;
	contactoEstrecho = _contactoEstrecho;
	dolorCabeza = _dolorCabeza;
	dolorGarganta = _dolorGarganta;
	/*laboratorio = _laboratorio;
	centro = _centro;*/
	ResultadoTesteo = _resultado;
}

cPaciente::~cPaciente()
{
}

void cPaciente::setLaboratorio(string _laboratorio, cLaboratorio laboratorio)
{
	_laboratorio = laboratorio.getNombre();
}

void cPaciente::setResultado(cLaboratorio laboratorio, cPaciente paciente)
{
	ResultadoTesteo = laboratorio.AnalisisMuestra(paciente);
}

void cPaciente::setCentro(cCentroTesteo centro, string _centro)
{
	_centro = centro.getNombre();
}
