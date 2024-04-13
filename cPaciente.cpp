#include "cPaciente.h"

const int cPaciente::getDNI()
{
    return this->DNI;
}

bool cPaciente::getContEstrecho()
{
    return this->contEstrecho;
}

bool cPaciente::getHeadhache()
{
    return this->headhache;
}

bool cPaciente::getSorehtroat()
{
    return this->sorehtroat;
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
    //si mas de 2 getSintomaX son TRUE entonces retorna +Positivo
    //si 0 -Negativo
    // si no se hayan. Sin resultado
}
