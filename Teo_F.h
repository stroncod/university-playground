#include <iostream>
#include <string.h>
#include <stack>
#include "AFnD.h"
#include "TransicionesEP.h"

#ifndef Teo_F
#define Teo_F
AFnD generarAFnD(std:: string nombre);

char* clausuraEpsilon(AFnD afnd, char estado, std::stack <char> pila);


TransicionesEP transicionEpsilon(char* conjunto, AFnD afnd);

#endif