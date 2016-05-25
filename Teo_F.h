#include <iostream>
#include <string.h>
#include <stack>
#include "AFnD.h"
#include "TransicionesEP.h"

#ifndef Teo_F
#define Teo_F
AFnD generarAFnD(std:: string nombre);
<<<<<<< HEAD
char* clausuraEpsilon(AFnD afnd, char estado, std::stack <char> pila);
=======

TransicionesEP transicionEpsilon(char* conjunto, AFnD afnd);

>>>>>>> jbranch1.1
#endif