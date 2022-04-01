#include "cCentroTesteo.h"
#include "cPaciente.h"
#include "cLaboratorio.h"
using namespace std;
cCentroTesteo::cCentroTesteo(string _ID, string _nombre, int _comuna, bool _completo_c, int _capacidad)
{
	ID = _ID;
	nombre = _nombre;
	comuna = _comuna;
	completo_c = _completo_c;
	capacidad = _capacidad;
}
cCentroTesteo::~cCentroTesteo()
{
}



void cCentroTesteo::Asociarlaboratorio(cLaboratorio* laboratorio, cPaciente* paciente)
{
	if ((laboratorio->getCompleto()) == false)
	{
		paciente->setLaboratorio(laboratorio->getNombre());
	}
}

void cCentroTesteo::AltaPaciente(cCentroTesteo* centro1, cCentroTesteo* centro2, cPaciente* paciente)
{
	if (centro1->completo_c == false)
	{
		centro1->capacidad++;
		paciente->setCentro(centro1);

	}
	else if (centro2->completo_c == false)
	{
		centro1->capacidad++;
		paciente->setCentro(centro2);
	}
}

void cCentroTesteo::getMandarTesteo()
{
}

void cCentroTesteo::BajaPaciente(cPaciente* paciente) //recibe el resultado del testeo y si es positivo o negativo, le da de baja al paciente
{
	if (paciente->getResultado() == 1 || paciente->getResultado() == 2)
	{
		cPaciente *paciente = NULL;
	}
}

string cCentroTesteo::tostring(int var_int)
{
	string var_string = to_string(var_int);
	return var_string;
}

void cCentroTesteo::Imprimir()
{
}

int cCentroTesteo::getResultado(cPaciente* paciente)
{
	int resultado = laboratorio->AnalisisMuestra(paciente);
	return resultado;
}
