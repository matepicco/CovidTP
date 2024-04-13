#pragma once

//Archivo para no copiar enum o librerias en cada .ccp y .h

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <string>
#include <ctime>
#include <list>

using namespace std;

typedef struct Fecha {
	int dia, mes, anio;
}sFecha;

enum TestResult { Positivo, Negativo, SinResultado };