#pragma once
#include "Headers.h"
#include "cPaciente.h"

class cLab
{
private:
	string LabID;
	string LabName;
	string LabComuna;
	bool LabComplete;

	cPaciente* ptrPac;

public:
	cLab(string labID, string labName, string labComuna);
	
	string getLabID();
	void setLabID(string labID);
	void bajaPac();

	void recibirMuestra(cPaciente* cPac);//recibe al paciente y asi modificar su resultado
	void muestraAnalisis(); //ambas reciben ptrPac
	void avisarPac(); // =
	void disponibilidad();	//Evalua si la lista esta llena, si esa llena cambia el atributo de completo

	~cLab();
};

