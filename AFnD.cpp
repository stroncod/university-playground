#include "AFnD.h"


AFnD::AFnD(){}

void AFnD::setDimension(int a, int b){
	col=a;
	fil=b;
}
void AFnD::setTransicion( char **m){
	matrix=m;
}
void AFnD::setAlfabeto(char* alf){
	alfabeto=alf;
}
void AFnD::setEstados(char* est){
	estados=est;
}
void AFnD::setInicioyFinal(char i, char f){
	est_inicial=i;
	est_final=f;
}

int AFnD::size_alphabet(){
	return fil-1;
}
int AFnD::size_states(){
	return col-1;
}
char** AFnD::transicion(){
	return matrix;
}
char* AFnD::states(){
	return estados;
}
char* AFnD::alphabet(){
	return alfabeto;
}
char AFnD::e_inicial(){
	return est_inicial;
}
char AFnD::e_final(){
	return est_final;
}
