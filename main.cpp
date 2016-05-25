#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "AFnD.h"
#include "Teo_F.h"
#include "TransicionesEP.h"

using namespace std;



int main(int argc, char const *argv[])
{
	AFnD::AFnD afnd;
	afnd = generarAFnD("funcion_transicion.txt");
	for (int i = 0; i < afnd.size_states(); ++i)
	{
		for (int j = 0; j < afnd.size_alphabet(); ++j)
		{
			cout << afnd.transicion()[i][j] << " ";
		}

		cout<<endl;
	}


	char conjunto[] = "ce";
	TransicionesEP tep;


	tep = transicionEpsilon(conjunto, afnd);



	cout<<tep.getTransA()<<endl;
	cout<<tep.getTransB()<<endl;	
	
	return 0;
}