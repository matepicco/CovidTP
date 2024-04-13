#pragma once
#include "Headers.h"

class cPaciente
{
private:

	const int DNI;
	string nombreP;
	string apellidoP;
	string telP;
	bool fiebre, tos, mocos, contEstrecho, headhache, sorehtroat;
	enum TestResult;
	
public:
	const int getDNI();

	bool getFiebre();
	bool getTos();
	bool getMocos();
	bool getContEstrecho();
	bool getHeadhache();
	bool getSorehtroat();

	string getTestResult();
};

