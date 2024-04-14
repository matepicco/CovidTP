#include "cPaciente.h"

cPaciente::cPaciente(int dni, string NombreP, string ApellidoP, string TelP, bool Fiebre, bool Tos, bool Mocos, bool ContEstrecho, bool Headhache, bool Sorehtroat): DNI(dni)
{
    this->nombreP = NombreP;
    this->apellidoP = ApellidoP;
    this->telP = TelP;
    this->fiebre = Fiebre;
    this->tos = Tos;
    this->mocos = Mocos;
    this->contEstrecho = ContEstrecho;
    this->headhache = Headhache;
    this->sorethroat = Sorehtroat;
}

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

TestResult cPaciente::getTestResult()
{
    return this->Resultado;
   //devuelve la info del resultado cambiado por el laboratorio una vez q el paciente paso por ahi
}
