#pragma once
#include "Headers.h"

class cPaciente
{
private:

	const int DNI;
	string nombreP;
	string apellidoP;
	string telP;
	bool fiebre, tos, mocos, contEstrecho, headhache, sorethroat;
	//enum TestResult;
	TestResult Resultado;
public:
	const int getDNI();
	void set_resultado(TestResult resultado);

	bool getFiebre();
	bool getTos();
	bool getMocos();
	bool getContEstrecho();
	bool getHeadhache();
	bool getSorethroat();

	string getTestResult();
};

