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
		paciente.setLaboratorio(laboratorio.getNombre(), laboratorio);
	}
}

void cCentroTesteo::getAltaPaciente(cCentroTesteo centro1, cCentroTesteo centro2, cPaciente paciente)
{
	int counter1, counter2;
	if (centro1.completo_c == false)
	{
		counter1++;
		paciente.setCentro(centro1,centro1.getNombre());

	}
	else if (centro2.completo_c == false)
	{
		counter2++;
		paciente.setCentro(centro2,centro2.getNombre());
	}
}

void cCentroTesteo::getMandarTesteo()
{
}

void cCentroTesteo::BajaPaciente(cPaciente paciente) //recibe el resultado del testeo y si es positivo o negativo, le da de baja al paciente
{
	if (paciente.getResultado() == 1 || paciente.getResultado() == 2)
	{
		cPaciente *paciente = NULL;
	}
}

void cCentroTesteo::to_string()
{

}

void cCentroTesteo::Imprimir()
{
}
