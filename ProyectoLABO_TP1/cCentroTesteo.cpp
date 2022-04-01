#include "cCentroTesteo.h"
#include "cPaciente.h"
#include "cLaboratorio.h"
using namespace std;
cCentroTesteo::cCentroTesteo(string _ID, string _nombre, int _comuna, bool _completo_c, int _capacidad, int _resultado)
{
	ID = _ID;
	nombre = _nombre;
	comuna = _comuna;
	completo_c = _completo_c;
	capacidad = _capacidad;
	ResultadoTesteo = _resultado;
}
cCentroTesteo::~cCentroTesteo()
{
}



void cCentroTesteo::CentroCompleto()
{
	if (capacidad >= 2)
		completo_c = true;
	else if (capacidad < 2)
		completo_c = false;

}


bool cCentroTesteo::AltaPaciente_c(cCentroTesteo* centro, cPaciente* paciente)
{
	if (centro->completo_c == false)
	{
		centro->capacidad++;
		paciente->setCentro(centro);
		CentroCompleto();
		return true;
	}
	else
		return false;

}

void cCentroTesteo::MandarTesteo(cPaciente* paciente, cLaboratorio* laboratorio)
{
	ResultadoTesteo = laboratorio->AnalisisMuestra(paciente);
	paciente->setResultado(ResultadoTesteo);
}

void cCentroTesteo::BajaPaciente(cPaciente* paciente) //recibe el resultado del testeo y si es positivo o negativo, le da de baja al paciente
{
	if (paciente->getResultado() == 1 || paciente->getResultado() == 2)
	{
		paciente = NULL;
	}
}

string cCentroTesteo::tostring(int var_int)
{
	string var_string = to_string(var_int);
	return var_string;
}

void cCentroTesteo::imprimir_c() //imprime los datos del centro
{
	cout << "ID:" << ID << endl;
	cout << "Nombre:" << nombre << endl; 
	cout << "Comuna:" << comuna << endl; 
}

int cCentroTesteo::getResultado()
{
	return ResultadoTesteo;
}
