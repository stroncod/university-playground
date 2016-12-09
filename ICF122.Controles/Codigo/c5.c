#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *f=fopen("codigo.txt","r");
	FILE *f2=fopen("decodigo.txt","w");
	if (f ==NULL||f2==NULL){
		printf("Error al abrir el archivo \n");
		exit(1);
	}
	int a;
	char aux;
	printf("Empezando la decodificacion del archivo \n");
	for(a=getc(f); a!=EOF; a=getc(f)){
		aux=a+3;
		fprintf(f2,"%c",aux);
		
	}
	fclose(f);
	fclose(f2);
	puts("OK!\n");
//SERGIO TRONCOSO//
}
