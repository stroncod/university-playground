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