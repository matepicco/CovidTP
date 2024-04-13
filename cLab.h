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
	//DEFINIR QUE RECIBEN Y QUE DEVUELVEN: implementar 
	void recibirMuestra();
	void muestraAnalisis(); //ambas reciben ptrPac
	void avisarPac(); // =

	string getLabID();
	void setLabID(string labID);

};

