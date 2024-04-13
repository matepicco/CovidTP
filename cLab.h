#pragma once
#include <string>

class cLab
{
private:
	string LabID;
	string LabName;
	string LabComuna;
	bool LabComplete;

	cPaciente* ptrPac;

public:
	//DEFINIR QUE RECIBEN Y QUE DEVUELVEN
	void recibirMuestra();
	void muestraAnalis(); //ambas reciben ptrPac
	void avisarPac(); // 
};

