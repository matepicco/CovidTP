#include "Headers.h"
#include "cCentrodeTesteo.h"

int main()
{
	cPaciente* pac1 = new cPaciente(23, "jose", "perez", "2324634", true, true, true, true, true, true);

	cLab* Labo1 = new cLab("1234", "Cpvid", "6600");
	cCentrodeTesteo* Centro1 = new cCentrodeTesteo("2324", 6600, "Swiss");

	Centro1->asocLab(Labo1);
	Centro1->altaPac(pac1);
	Centro1->sendTest();
	Labo1->muestraAnalisis();

	delete pac1;
	delete Labo1;
	delete Centro1;
};