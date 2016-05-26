#include "AFD.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

AFD::AFD(){}

void AFD::imprimirAutomata(){
	//Imagne generada con la matriz de min.txt//
	ofstream fs("AFD.dot");
	fs<<"digraph AFD{"<<endl;

	for (int i = 1; i < fil; ++i)
	{
		for(int j=1; j< col; ++j){
			fs<<"\t"<<matrix[i][0]<<" -> "<<matrix[i][j]<<"[label=\""<<matrix[0][j]<<"\"];"<<endl;
		}
	}
	fs<<"}";
	fs.close();
	cout<<"La imagen de su automata se realizo con exito!"<<endl;
  	system("dot -Tjpg -O AFD.dot");
}
void AFD::setTransicion(char** m){
	matrix=m;
}
void AFD::setDimension(int a, int b){
	col=a;
	fil=b;
}
void AFD::setInicioyFinal(char i, char f){
	est_inicial=i;
	est_final=f;
}
int AFD::size_alphabet(){
	return col;
}
int AFD::size_states(){
	return fil;
}




