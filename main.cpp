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

	char* weaita;

	weaita=clausuraEpsilon(afnd,afnd.e_inicial(),pila);
	for (int i = 0; i < sizeof(weaita); ++i)
	{
		cout<< weaita[i]<<" ";
	}
	cout<<endl;

	for (int i = 0; i < afnd.size_states(); ++i)
	{
		for (int j = 0; j < afnd.size_alphabet(); ++j)
		{
			cout << afnd.transicion()[i][j] << " ";
		}

		cout<<endl;
	}

	/*
	char conjunto[] = "ce";
	TransicionesEP tep;


	tep = transicionEpsilon(conjunto, afnd);

	cout<<tep.getTransA()<<endl;
	cout<<tep.getTransB()<<endl;	
	*/
	return 0;
}