#include "cPaciente.h"
#include "cCentroTesteo.h"
using namespace std;

cPaciente::cPaciente(string _nombre, string _apellido, string _DNI, string _telefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoEstrecho, bool _dolorCabeza, bool _dolorGarganta, int _resultado)//constructor
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

void cPaciente::setCentro(cCentroTesteo* centro)
{
	nombre_centro = centro->getNombre();
}

void cPaciente::imprimir_p() {//imprime los datos de los pacientes junto con sus sintomas 
	cout << "DATOS DEL PACIENTE:" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "DNI: " << DNI << endl;
	cout << "telefono: " << telefono << endl;
	cout << "CANTIDAD SINTOMAS POSITIVOS:" << endl;
	cout <<"" << tostring(ContadorSintomas()) << endl;
	cout << "resultado testeo: " << tostring(ResultadoTesteo) << endl;
}

string cPaciente::tostring(int var_int) //pasa la variable int a string
{
	string var_string = to_string(var_int);
	return var_string;
}

int cPaciente::ContadorSintomas()
{
	int counter = 0;
	if (contactoEstrecho == true)
	{
		counter++;
	}
	if (dolorGarganta == true)
	{
		counter++;
	}
	if (dolorCabeza == true)
	{
		counter++;
	}
	if (fiebre == true)
	{
		counter++;
	}
	if (mocos == true)
	{
		counter++;
	}
	if (tos == true)
	{
		counter++;
	}
	return counter;
}
