#pragma once
#include "cLab.h"
#include "cPaciente.h"

using namespace std;

class cCentrodeTesteo
{
private:
	const string centerID;
	int comunaTC;
	string nameTC;
	bool completeTC;

	cPaciente* ptrPaciente;
	cLab* ptrLab;

public:
	void setCompleteTC(bool Completo);
	bool getCompleteTC();

	void asocLab(string LabID);
	void altaPac(cPaciente* pacX);
	bool sendTest(string LabID);
	void bajaPac();
};
