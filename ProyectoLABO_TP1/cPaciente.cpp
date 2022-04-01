#include "cPaciente.h"
using namespace std;

cPaciente::cPaciente(string _nombre, string _apellido, string _DNI, string _telefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoEstrecho, bool _dolorCabeza, bool _dolorGarganta, int _resultado, cCentroTesteo* _centro)//constructor
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
	this->centro = _centro;
}

cPaciente::~cPaciente()//destructor
{
	
}

void cPaciente::setLaboratorio(string _laboratorio)//asigna los nombres a los laboratorios
{
	nombre_laboratorio = _laboratorio;
} //esta funcion despues hay que ver de sacarla pq no debe haber relacion directa entre paciente y laboratorio

void cPaciente::setResultado(cCentroTesteo* centro, cPaciente* paciente)//asigna los resultados
{
	ResultadoTesteo = centro->getResultado(paciente);
}

void cPaciente::setCentro(cCentroTesteo centro)
{
	nombre_centro = centro.getNombre();
}

void cPaciente::imprimir() {//imprime los datos de los pacientes junto con sus sintomas 
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
	cout << "resultado testeo: " << to_string(ResultadoTesteo) << endl;
}

string cPaciente::to_string(int var_int) //pasa la variable int a string
{
	string var_string = to_string(var_int);
	return var_string;
}
