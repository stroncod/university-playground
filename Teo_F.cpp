#include "Teo_F.h"
#include "AFnD.h"
#include <array>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

AFnD generarAFnD(string nombre){
	string line;
	char * token;
	char * copy;
	int col = 0, filas = 0, a=0, b=0;
	AFnD::AFnD afnd;

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
	afnd.setAlfabeto(a_alfabeto);
	for (int i = 0; i < col; ++i)
	{
		a_alfabeto[i] = matrix[0][i];
	}
	afnd.setEstados(a_estados);
	cout<<"Su AFnD ha sido generado con exito" <<endl;

	return afnd;
}