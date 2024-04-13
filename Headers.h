#pragma once

//Archivo para no copiar enum o librerias en cada .ccp y .h

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <string>
#include <ctime>
#include <list>
#include "enumResultadoTesteo.h"

using namespace std;

typedef struct Fecha {
	int dia, mes, anio;
}sFecha;

//podria ir aca pero creo que es mas prolijo si el enum tiene su propio .h
//enum TestResult { Positivo, Negativo, SinResultado };