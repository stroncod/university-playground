#include <stdio.h>
#include <stdlib.h>
#include <string>
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
	afnd = generarAFnD("funcion_transicion.txt");
	for (int i = 0; i < afnd.size_alphabet(); ++i)
	{
		for (int j = 0; j < afnd.size_states(); ++j)
		{
			cout << afnd.transicion()[i][j] << " ";
		}

		cout<<endl;
	}	
	
	return 0;
}