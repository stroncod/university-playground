#include "TransicionesEP.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

TransicionesEP::TransicionesEP(){}

char* TransicionesEP::getTransA()
{
	return transA;
}

char* TransicionesEP::getTransB()
{
	return transB;
}

void TransicionesEP::setTransA(char* a, int cont)
{
	char* aux = (char*) calloc(cont, sizeof(char));
	for (int i = 0; i < cont; ++i)
	{
		aux[i] = a[i];
	}

	transA = aux;
}

void TransicionesEP::setTransB(char* b, int cont)
{
	char* aux = (char*) calloc(cont, sizeof(char));
	for (int i = 0; i < cont; ++i)
	{
		aux[i] = b[i];
	}

	transB = aux;
}