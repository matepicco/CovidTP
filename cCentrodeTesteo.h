#pragma once
//due to ptrs, incluimos sus .h
#include "cLab.h"
#include "cPaciente.h"

using namespace std;

class cCentrodeTesteo
{
private:
	string centerID;
	int comunaTC;
	string nameTC;
	bool completeTC;

	cPaciente* ptrPaciente;
	cLab* ptrLab;

public:
	void asocLab(string LabID);
	void altaPac();//usa el ptrPac
	void sendTest(string LabID);
	void bajaPac();//usa el ptrPac
};

