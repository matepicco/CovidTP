#include "cLab.h"

cLab::cLab(string labID, string labName, string labComuna)
{
	this->LabID = labID;
	this->LabName = labName;
	this->LabComuna = labComuna;
	this->LabComplete = false;
	this->ptrPac = nullptr;
}

void cLab::recibirMuestra(cPaciente* cPac)
{
	disponibilidad();
	if (LabComplete == true) {
		cout << "el Laboratorio se encuentra en su capacidad maxima" << endl;
	}
	else
	ptrPac = cPac;
	//Podriamos hacer un bloque try catch por si pasa algo con la muestra, no la recibe etc
}

void cLab::muestraAnalisis()
{
	int contSintomas = 0;
	if (ptrPac->getContEstrecho() == true)
		contSintomas++;
	if (ptrPac->getFiebre() == true)
		contSintomas++;
	if (ptrPac->getHeadhache() == true)
		contSintomas++;
	if (ptrPac->getMocos() == true)
		contSintomas++;
	if (ptrPac->getSorethroat() == true)
		contSintomas++;
	if (ptrPac->getTos() == true)
		contSintomas++;

	if (contSintomas >= 2)
		this->ptrPac->set_resultado(Positivo);
	else if(contSintomas<2)
		this->ptrPac->set_resultado(Negativo);
	else
		this->ptrPac->set_resultado(SinResultado);
	//podria haber alguna especie de throw aca nose

	//mensaje al paciente sobre resultado
	avisarPac();
}

void cLab::avisarPac()
{
	if (ptrPac->getTestResult() == 0)
		cout << "El resultado de su test es positivo!";
	else
		cout << "El resultado de su test es negativo!";
}

void cLab::disponibilidad()
{
	//Evalua si la lista esta llena, si esa llena cambia el atributo de completo
}

string cLab::getLabID()
{
	return this->LabID;
}

void cLab::setLabID(string labID)
{
	this->LabID = labID;
}

void cLab::bajaPac()
{
}

cLab::~cLab()
{
}
