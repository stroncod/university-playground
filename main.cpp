#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "AFnD.h"
#include "Teo_F.h"

using namespace std;



int main(int argc, char const *argv[])
{
	AFnD::AFnD afnd;
	char estado_inicial;
	char estado_final;
	cout<<"Ingrese estado inicial"<<endl;
	cin>>estado_inicial>>estado_final;
	afnd.setInicioyFinal(estado_inicial,estado_final);
	afnd = generarAFnD("funcion_transicion.txt");

	

	
	return 0;
}