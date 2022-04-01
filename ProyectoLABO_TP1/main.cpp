#include <iostream>
#include <string>
#include <stdio.h>
#include "cCentroTesteo.h"
#include "cLaboratorio.h"
#include "cPaciente.h"

int main()
{
	cCentroTesteo* centro1 = new cCentroTesteo("1", "Beruti", 1, false, 0);
	cCentroTesteo* centro2 = new cCentroTesteo("2", "Sarmiento", 2, false, 0);
	cLaboratorio* laboratorio1 = new cLaboratorio("1", "Favaloro", 1, false, 0);
	cLaboratorio* laboratorio2 = new cLaboratorio("2", "Italiano", 2, false, 0);

	cPaciente* paciente1 = new cPaciente("Juan", "Perez", "434462", "11534242", false, false, true, true, false, false, 0);
	
	paciente1->setCentro(centro1);
	centro1->Asociarlaboratorio(laboratorio1, paciente1);//asocie a juan a el laboratorio y el centro 1
	cout << "" << paciente1->getCentro() << endl;
	paciente1->setResultado(centro1, paciente1);
	cout << "" << paciente1->getResultado() << endl;
	
	 

	return 0;
	system("pause");
}