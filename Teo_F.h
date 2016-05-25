#include <iostream>
#include "AFnD.h"
#include "TransicionesEP.h"

#ifndef Teo_F
#define Teo_F
AFnD generarAFnD(std:: string nombre);

TransicionesEP transicionEpsilon(char* conjunto, AFnD afnd);

#endif