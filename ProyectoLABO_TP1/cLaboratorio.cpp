#include "cLaboratorio.h"
#include "cPaciente.h"
using namespace std;

cLaboratorio::cLaboratorio(string _ID, string _nombre, int _comuna, bool _completo_l, int _capacidad, int _resultado)//constructor
{
	ID = _ID;
	nombre = _nombre;
	comuna = _comuna;
	completo_l = _completo_l = false; 
	capacidad = _capacidad;
	resultado = _resultado;
}

cLaboratorio::~cLaboratorio()//destructor
{
}

void cLaboratorio::LaboratorioCompleto()
{
	if (capacidad >= 2)
		completo_l = true;
	else if (capacidad < 2)
		completo_l = false;

}

void cLaboratorio::CapacidadLaboratorio() //funcion que cuenta la capacidad del laboratorio
{
	if (capacidad < 2)//si tiene menos de 2 pacientes, no esta completo
	{
		capacidad++;
		completo_l = false;
	}
	if (capacidad == 2)//si tiene 2 pacientes, esta completo
	{
		completo_l = true;
	}
}

bool cLaboratorio::getCompleto()//devuelvo un false/true dependiendo si esta completo
{
	return completo_l;
}

int cLaboratorio::AnalisisMuestra(cPaciente* paciente) //cuenta los sintomas y devuelve el numero del enum correspondiente al resultado
{
	int counter = 0;
	if (paciente->getContactoEstrecho() == true)
	{
		counter++;
	}
	if (paciente->getDolorGarganta() == true)
	{
		counter++;
	}
	if (paciente->getDolorCabeza() == true)
	{
		counter++;
	}
	if (paciente->getFiebre() == true)
	{
		counter++;
	}
	if (paciente->getMocos() == true)
	{
		counter++;
	}
	if (paciente->getTos() == true)
	{
		counter++;
	}
	if (counter >= 2)
	{
		return 1;// resultado positivo
	}
	if (counter < 2)
	{
		return 2;//resultado negativo
	}
	else
		return 0;//sin resultado
}


string cLaboratorio::AvisarPacientes(int resultado)
{

	switch (resultado) {
	case 0:
		return "SINRESUL";
		break;
	case 1:
		return "POSITIVO";
		break;
	case 2:
		return "NEGATIVO";
		break;
	default:
		return "SINRESUL";
	}

}

bool cLaboratorio::RecibirMuestra(cLaboratorio* laboratorio, cPaciente* paciente) //es como el alta paciente del centro
{
	if (laboratorio->completo_l == false)
	{
		laboratorio->capacidad++;
		paciente->setLaboratorio(laboratorio->getNombre());
		LaboratorioCompleto();
		return true;
	}
	else
		return false;
}

string cLaboratorio::tostring(int var_int)
{
	string var_string = to_string(var_int);
	return var_string;
}

void cLaboratorio::imprimir_l()
{
    cout << "DATOS DEL LABORATORIO:" << endl;
	cout << "ID: " << ID << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Comuna: " << comuna << endl;

}

string cLaboratorio::getNombre()
{
	return nombre;
}
