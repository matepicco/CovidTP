#include "cPaciente.h"

const int cPaciente::getDNI()
{
    return this->DNI;
}

void cPaciente::set_resultado(TestResult resultado)
{
    this->Resultado = resultado;
}

bool cPaciente::getContEstrecho()
{
    return this->contEstrecho;
}

bool cPaciente::getHeadhache()
{
    return this->headhache;
}

bool cPaciente::getSorethroat()
{
    return this->sorethroat;
}

bool cPaciente::getFiebre()
{
    return this->fiebre;
}

bool cPaciente::getTos()
{
    return this->tos;
}

bool cPaciente::getMocos()
{
    return this->mocos;
}
//getters de sintomas

string cPaciente::getTestResult()
{
   //devuelve la info del resultado cambiado por el laboratorio una vez q el paciente paso por ahi
}
