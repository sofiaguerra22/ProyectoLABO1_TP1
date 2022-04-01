#include "cCentroTesteo.h"
using namespace std;
cCentroTesteo::cCentroTesteo(string _ID, string _nombre, int _comuna, bool _completo_c)
{
	ID = _ID;
	nombre = _nombre;
	comuna = _comuna;
	completo_c = _completo_c;
}
cCentroTesteo::~cCentroTesteo()
{
}



void cCentroTesteo::Asociarlaboratorio(cLaboratorio laboratorio, cPaciente paciente)
{
	if ((laboratorio.getCompleto()) == false)
	{
		paciente.setLaboratorio(laboratorio.getNombre());
	}
}

void cCentroTesteo::getAltaPaciente(cCentroTesteo centro1, cCentroTesteo centro2, cPaciente paciente)
{
	int counter1, counter2;
	if (centro1.completo_c == false)
	{
		counter1++;
		paciente.setCentro(centro1);

	}
	else if (centro2.completo_c == false)
	{
		counter2++;
		paciente.setCentro(centro2);
	}
}

void cCentroTesteo::MandarTesteo()
{
}

void cCentroTesteo::BajaPaciente(cPaciente paciente) //recibe el resultado del testeo y si es positivo o negativo, le da de baja al paciente
{
	if (paciente.getResultado() == 1 || paciente.getResultado() == 2)
	{
		cPaciente *paciente = NULL;
	}
}

string cCentroTesteo::to_string(int var_int)
{
	string var_string = to_string(var_int);
	return var_string;
}

void cCentroTesteo::Imprimir()
{
}

int cCentroTesteo::getResultado(cPaciente* paciente)
{
	int resultado = laboratorio->AnalisisMuestra(*paciente);
	return resultado;
}
