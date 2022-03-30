#include "cLaboratorio.h"
using namespace std;

cLaboratorio::cLaboratorio(string _ID, string _nombre, int _comuna, bool _completo_l)
{
	ID = _ID;
	nombre = _nombre;
	comuna = _comuna;
	completo_l = _completo_l = false;

}

cLaboratorio::~cLaboratorio()
{
}

void cLaboratorio::CapacidadLaboratorio() //funcion que cuenta los espacios del laboratorio
{
	int contador;
	if (contador < 2)
	{
		contador++;
		completo_l = false;
	}
	if (contador == 2)
	{
		completo_l = true;
	}
}

bool cLaboratorio::getCompleto()
{
	return completo_l;
}

int cLaboratorio::AnalisisMuestra(cPaciente paciente) //devuelve el numero del enum correspondiente al resultado
{
	int counter = 0;
	if (paciente.getContactoEstrecho() == true)
	{
		counter++;
	}
	if (paciente.getDolorGarganta() == true)
	{
		counter++;
	}
	if (paciente.getDolorCabeza() == true)
	{
		counter++;
	}
	if (paciente.getFiebre() == true)
	{
		counter++;
	}
	if (paciente.getMocos() == true)
	{
		counter++;
	}
	if (paciente.getTos() == true)
	{
		counter++;
	}
	if (counter > 2)
	{
		return 1;// resultado positivo
	}
	if (counter <= 2)
	{
		return 2;//resultado negativo
	}
	else
		return 0;//sin resultado
}
void cLaboratorio::recibirMuestra(cPaciente paciente)
{
if (completo_l ==true){
	printf("Laboratorio completo. No se pueden recibir mas muestras.");
}else if (completo_l==false){
	printf("Se pudo recibir la muestra con exito.");
}
}
void cLaboratorio::getAvisarPacientes()
{
}

void cLaboratorio::to_string()
{
}

void cLaboratorio::Imprimir()
{
}

string cLaboratorio::getNombre()
{
	return nombre;
}
