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
	//punteros de relaciones entre clases
	cPaciente* ptrPaciente;//deberia ser como un array/lista de dos punteros, porque puede atender dos pacientes?
	cLab* ptrLab;

public:
	cCentrodeTesteo(const string CenterID, int ComunaTC, string NameTC);
	~cCentrodeTesteo();
	void setCompleteTC(bool Completo);
	bool getCompleteTC();
	//hacer metetodo disponible para cambiar el bool de completo
	void asocLab(cLab* lab);
	void altaPac(cPaciente* pacX);
	bool sendTest();//podria ser que este metodo mande el paciente al laboratorio y el paciente tenga un metodo random que defina el atributo de resultado de paciente
	void bajaPac();
};
