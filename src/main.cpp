#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stack>
#include "AFnD.h"
#include "Teo_F.h"
#include "TransicionesEP.h"
#include "AFD.h"
#include <list>

using namespace std;



int main(int argc, char const *argv[])
{
	AFnD afnd;
	char estado_inicial;
	char estado_final;
	stack <char> pila;
	pila.push('*');
	cout<<"Ingrese estado inicial y final"<<endl;
	cin>>estado_inicial;
	cin>>estado_final;
	afnd = generarAFnD("funcion_transicion.txt");
	afnd.setInicioyFinal(estado_inicial,estado_final);
	AFD afd;
	char* weaita;

	list<char*> estados;

	weaita=clausuraEpsilon(afnd,afnd.e_inicial(),pila);

	TransicionesEP tep;


	tep = transicionEpsilon(weaita, afnd);
	afnd_to_afd(afnd, tep, estados, pila);
	
	return 0;
}