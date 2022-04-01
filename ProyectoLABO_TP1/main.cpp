#include <iostream>
#include <string>
#include <stdio.h>
#include "cCentroTesteo.h"
#include "cLaboratorio.h"
#include "cPaciente.h"

cCentroTesteo* AsignarCentro(cCentroTesteo* centro1, cCentroTesteo* centro2, cPaciente* paciente);
cLaboratorio* AsignarLaboratorio(cLaboratorio* laboratorio1, cLaboratorio* laboratorio2, cPaciente* paciente);

using namespace std;
//typedef enum ResultadoTesteo { SINRESUL, POSITIVO, NEGATIVO };

int main()
{
	//memoria dinamica
	cCentroTesteo* centro1 = new cCentroTesteo("1", "Beruti", 1, false, 0);
	cCentroTesteo* centro2 = new cCentroTesteo("2", "Sarmiento", 2, false, 0);
	cLaboratorio* laboratorio1 = new cLaboratorio("1", "Favaloro", 1, false, 0);
	cLaboratorio* laboratorio2 = new cLaboratorio("2", "Italiano", 2, false, 0);
	cPaciente* paciente1 = new cPaciente("Juan", "Perez", "434462", "11534242", false, false, true, true, false, false, 0);
	cPaciente* paciente2 = new cPaciente("Claudia", "Gonzalez", "635454", "112334", false, false, false, false, false, false, 0);
	cPaciente* paciente3 = new cPaciente("Roberto", "Gomez", "928384", "112345", false, true, true, true, false, false, 0);

	//inicializacion paciente1
	cCentroTesteo* centro_aux1 = AsignarCentro(centro1, centro2, paciente1);//centroaux1 porque es el centro al que se asigna el paciente1
	cLaboratorio* labo_aux1 = AsignarLaboratorio(laboratorio1, laboratorio2, paciente1);
	paciente1->setResultado(centro_aux1, paciente1, labo_aux1);
	cout << "\nEl resultado del paciente " << paciente1->getNombre() << " es: " << paciente1->getResultado() << endl;

	//inicializacion paciente2:
	cCentroTesteo* centro_aux2 = AsignarCentro(centro1, centro2, paciente2);
	cLaboratorio* labo_aux2 = AsignarLaboratorio(laboratorio1, laboratorio2, paciente2);
	paciente2->setResultado(centro_aux2, paciente2, labo_aux2);
	cout << "\nEl resultado del paciente " << paciente2->getNombre() << " es: " << paciente2->getResultado() << endl;

	//inicializacion paciente3
	cCentroTesteo* centro_aux3 = AsignarCentro(centro1, centro2, paciente3);
	cLaboratorio* labo_aux3 = AsignarLaboratorio(laboratorio1, laboratorio2, paciente3);
	paciente3->setResultado(centro_aux3, paciente3, labo_aux3);
	cout << "\nEl resultado del paciente " << paciente3->getNombre() << " es: " << paciente3->getResultado() << endl;
	

	/*//funcion imprimir:
	paciente1->imprimir_p();
	cout << "\n" << endl;
	paciente2->imprimir_p();
	cout << "\n" << endl;
	paciente3->imprimir_p();
	cout << "\n" << endl;
	centro1->imprimir_c();
	cout << "\n" << endl;
	centro2->imprimir_c();
	cout << "\n" << endl;*/

	
	//deletes
	delete centro1;
	delete centro2;
	delete laboratorio1;
	delete laboratorio2;
	delete paciente1;
	delete paciente2;
	delete paciente3;

	return 0;
	system("pause");
}
cCentroTesteo* AsignarCentro(cCentroTesteo* centro1, cCentroTesteo* centro2, cPaciente* paciente)
{
	if ((centro1->AltaPaciente_c(centro1, paciente)) == true)
	{
		cout << "\nPaciente " <<paciente->getNombre()<< " asignado exitosamente al centro : " << centro1->getNombre() << endl;
		return centro1;
	}
	else if ((centro2->AltaPaciente_c(centro2, paciente)) == true)
	{
		cout << "\nPaciente " << paciente->getNombre() << " asignado exitosamente al centro : " << centro2->getNombre() << endl;
		return centro2;
	}
	else
	{
		cout << "\nNo hay espacio disponible en ningun centro para el paciente " << paciente->getNombre() << endl;
		return NULL;
	}

}

cLaboratorio* AsignarLaboratorio(cLaboratorio* laboratorio1, cLaboratorio* laboratorio2, cPaciente* paciente)
{
	if ((laboratorio1->AltaPaciente_l(laboratorio1, paciente)) == true)
	{
		cout << "\nPaciente "<<paciente->getNombre()<< " asignado exitosamente al laboratorio : " << laboratorio1->getNombre() << endl;
		return laboratorio1;
	}
	else if ((laboratorio2->AltaPaciente_l(laboratorio2, paciente)) == true)
	{
		cout << "\nPaciente " << paciente->getNombre() << " asignado exitosamente al laboratorio : " << laboratorio2->getNombre() << endl;
		return laboratorio2;
	}
	else
	{
		cout << "\nNo hay espacio disponible en ningun laboratorio para el paciente " << paciente->getNombre() << endl;
		return NULL;
	}
}
