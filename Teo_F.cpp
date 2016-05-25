#include "Teo_F.h"
#include "AFnD.h"
#include <stack>
#include "TransicionesEP.h"
#include <array>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

AFnD generarAFnD(string nombre){
	string line;
	char * token;
	char * copy;
	int col = 0, filas = 0, a=0, b=0;
	AFnD afnd;

	ifstream myfile (nombre);
	if (myfile.is_open())
	{
		while( getline(myfile, line) )
		{
			copy = (char*) malloc(line.length());
			for (int i = 0; i < line.length(); i++)
			{
				copy[i] = line[i];
			}
			token = strtok(copy, "\t");
			while(token != NULL)
			{
				col += 1;
				token = strtok(NULL, "\t");
			}

			filas += 1;
		}

		myfile.close();
	}
	col = col/filas;
	afnd.setDimension(col,filas);

	char ** matrix;
	matrix = (char**) calloc(filas, sizeof(char*));
	for (int i = 0; i < filas; i++)
	{
		matrix[i] = (char*) calloc(col, sizeof(char));
	}



	ifstream myfile2 (nombre);
	if (myfile2.is_open())
	{

			for (int i = 0; i < filas; ++i)
			{
				getline(myfile2, line);
				copy = (char*) malloc(line.length());
				for (int i = 0; i < line.length(); i++)
				{
					copy[i] = line[i];
				}

				token = strtok(copy, "\t");

				for (int j = 0; j < col; ++j)
				{
					matrix[i][j] = token[0];
					token = strtok(NULL, "\t");
				}

			}

		myfile.close();
	}

	afnd.setTransicion(matrix);

	char * a_estados = (char*)malloc(filas);
	char * a_alfabeto = (char*)malloc(col);
	
	for (int i = 0; i < filas; ++i)
	{
		a_estados[i] = matrix[i][0];
	}
	
	for (int i = 0; i < col; ++i)
	{
		a_alfabeto[i] = matrix[0][i];
	}
	afnd.setAlfabeto(a_alfabeto);
	afnd.setEstados(a_estados);
	cout<<"Su AFnD ha sido generado con exito" <<endl;

	return afnd;
}

char* clausuraEpsilon(AFnD afnd, char estado, std::stack <char> pila){
	
	int aux_es;
	int aux_al;
	char* conjunto = (char*)malloc(afnd.size_states());
	int j=0;
	char aux=estado;
	if ((pila.top() == aux) || ('-'== aux))
	{	
		while(!pila.empty())
		{
			conjunto[j]=pila.top();
			pila.pop();
			j++;
		}
		return conjunto;
		
	}else{
		pila.push(estado);
		for (int i = 0; i < afnd.size_states(); ++i)
		{
			if(estado == afnd.states()[i])
				aux_es=i;
		}
		for (int k = 0; k < afnd.size_alphabet(); ++k)
		{
			if('v'==afnd.alphabet()[k])
				aux_al=k;
		}
		return clausuraEpsilon(afnd,afnd.transicion()[aux_es][aux_al],pila);
	}
} 

TransicionesEP transicionEpsilon(char* conjunto, AFnD afnd)
{
	TransicionesEP tep = TransicionesEP();
	char* transA = (char*)malloc(afnd.size_alphabet());
	char* transB = (char*)malloc(afnd.size_alphabet());
	char** matrix = afnd.transicion();
	int contA = 0, contB = 0;
	for (int i = 0; i < strlen(conjunto); ++i)
	{
		for (int j = 1; j < afnd.size_states(); ++j)
		{
			if (conjunto[i] == matrix[j][0])
			{
				if (transA[contA-1] != matrix[j][2] && matrix[j][2] != '-')
				{
					transA[contA] = matrix[j][2];
					contA++;
				}

				if (transB[contB-1] != matrix[j][3] && matrix[j][2] != '-')
				{
					transB[contB] = matrix[j][3];
					contB++;
				}
				
	
			}
		}
	}

	tep.setTransA(transA, contA);
	tep.setTransB(transB, contB);

	return tep;


}
