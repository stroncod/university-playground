#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
	char estado_final= 'g';
	string line;
	char * token;
	char * copy;
	int col = 0, filas = 0, a=0, b=0;

	ifstream myfile ("test.txt");
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

	char ** matrix;
	matrix = (char**) calloc(filas, sizeof(char*));
	for (int i = 0; i < filas; i++)
	{
		matrix[i] = (char*) calloc(col, sizeof(char));
	}



	ifstream myfile2 ("test.txt");
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

	char * a_estados = (char*)malloc(filas);
	char * a_alfabeto = (char*)malloc(col);
	int aux_i;
	for (int i = 0; i < filas; ++i)
	{
		a_estados[i] = matrix[i][0];
	}
	
	for (int i = 0; i < col; ++i)
	{
		a_alfabeto[i] = matrix[0][i];
	}
	for (int i = 0; i < filas; ++i)
	{
		if (a_estados[i]==estado_final)
		{
			aux_i=i;
		}
	}
	for (int i = 0; i < filas; ++i)
	{
			if (i==aux_i)
			{
				cout<<i<<"="<<a_alfabeto[1]<<matrix[1][i]<<"+"<<a_alfabeto[2]<<matrix[2][i]<<"+ E"<<endl;
			}else{
			cout<<i<<"="<<a_alfabeto[1]<<matrix[1][i]<<"+"<<a_alfabeto[2]<<matrix[2][i]<<endl;
		}
	}
	return 0;
}
	



