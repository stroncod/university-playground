#include <iostream>
#include <string.h>
#include <stack>
#include "AFnD.h"
#include "TransicionesEP.h"
#include <list>

#ifndef Teo_F
#define Teo_F
AFnD generarAFnD(std:: string nombre);
char* clausuraEpsilon(AFnD afnd, char estado, std::stack <char> pila);
TransicionesEP transicionEpsilon(char* conjunto, AFnD afnd);
void afnd_to_afd(AFnD afnd, TransicionesEP tep, std::list<char*> list, std::stack<char> pila);

#endif