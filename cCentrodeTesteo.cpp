#include "cCentrodeTesteo.h"

cCentrodeTesteo::cCentrodeTesteo(const string CenterID, int ComunaTC, string NameTC):centerID(CenterID)
{
	comunaTC = ComunaTC;
	nameTC = NameTC;
	this->completeTC = false;
	this->ptrPaciente = nullptr;
	this->ptrLab = nullptr;
}

cCentrodeTesteo::~cCentrodeTesteo()
{
}

void cCentrodeTesteo::setCompleteTC(bool Completo)
{
	this->completeTC = Completo;
}

bool cCentrodeTesteo::getCompleteTC()
{
	return this->completeTC;
}

void cCentrodeTesteo::asocLab(cLab* lab)//en vez de manejarnos con ID, directamente paso los labs creados en main
{
	//basicamente: funciona como un setter
	this->ptrLab = lab;
}

void cCentrodeTesteo::altaPac(cPaciente* pacX)
{
	
	if (completeTC == true) {
		cout << "el centro de testeo esta lleno, gracias por su visita, vuelva pronto" << endl;
	}
	else
		this->ptrPaciente = pacX;// aca como quizas es un array/lista de punteros seria un poco distinto
	
	/*futura implementación:
	parametro por &&. Para agregar con PushBacK() a una lista
	chequeando si ya está registrado con un flag y tirando exepcion}
	sobrecarga operator +   */
}

bool cCentrodeTesteo::sendTest()//no recibe nada, simplemente le pasa el paciente que llego que tiene guardado internamente al lab
{
	ptrLab->recibirMuestra(ptrPaciente);
}

void cCentrodeTesteo::bajaPac()
{
	//sobrecarga del operator-
	//..............
	//hay que llamar al destructor cuando se hace la baja? porque en el futuro estaria en una lista
	// si va al laboratorio, tambien se le da de baja?
	setCompleteTC(false);
}
