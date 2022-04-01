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

void cPaciente::setCentro(cCentroTesteo centro)
{
	nombre_centro = centro.getNombre();
}

void cPaciente::imprimir() {
	cout << "DATOS DEL PACIENTE:" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "DNI: " << DNI << endl;
	cout << "telefono: " << telefono << endl;
	cout << "SINTOMAS QUE POSEE:" << endl;
	cout << "fiebre: " << fiebre << endl;
	cout << "tos: " << tos << endl;
	cout << "mocos: " << mocos << endl;
	cout << "contacto estrecho: " << contactoEstrecho << endl;
	cout << "dolor cabeza: " << dolorCabeza << endl;
	cout << "dolor garganta: " << dolorGarganta << endl;
	cout << "resultado testeo: " << setResultado << endl;
}