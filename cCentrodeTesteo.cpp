#include "cCentrodeTesteo.h"

void cCentrodeTesteo::setCompleteTC(bool Completo)
{
	this->completeTC = Completo;
}

bool cCentrodeTesteo::getCompleteTC()
{
	return this->completeTC;
}

void cCentrodeTesteo::asocLab(string LabID)
{
	//basicamente: funciona como un setter
	this->ptrLab->setLabID(LabID);
}

void cCentrodeTesteo::altaPac(cPaciente* pacX)
{/*futura implementación:
	parametro por &&. Para agregar con PushBacK() a una lista
	chequeando si ya está registrado con un flag y tirando exepcion}
	sobrecarga operator +
 */
	ptrPaciente = pacX;
}

bool cCentrodeTesteo::sendTest(string LabID)
{
	if (ptrPaciente->getTestResult() == "Positivo")
		return true;
	else if (ptrPaciente->getTestResult() == "Negativo")
		return false;
	else
		return; //(excepction)
}

void cCentrodeTesteo::bajaPac()
{
	//sobrecarga del operator-
}
