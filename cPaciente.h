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
	TestResult Resultado;
public:
	cPaciente(const int dni, string NombreP, string ApellidoP, string TelP, bool Fiebre, bool Tos, bool Mocos, bool ContEstrecho, bool Headhache, bool Sorehtroat);
	const int getDNI();
	void set_resultado(TestResult resultado);

	bool getFiebre();
	bool getTos();
	bool getMocos();
	bool getContEstrecho();
	bool getHeadhache();
	bool getSorethroat();

	TestResult getTestResult();
	
};

