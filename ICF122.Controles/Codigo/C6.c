#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	char a[30];
	char b[1000];
	char comp,camb;
	int j,i,k;
	FILE *f=fopen("salida.txt","w");
	if(f==NULL){
		printf("Error en el archivo de salida :( \n");
		exit(-1);
	}
	printf("Ingrese un caracter comparador:\n");
	scanf("%c",&comp);
	i=0;
	while (i!=1){
		printf("Ingrese una palabra,para salir escribalo: \n");
		
		scanf("%s",a);
		if (strcmp(a,"salir")==0){
			i++;
			break;
		}
		if (strlen(a)<30){
			strcat(b,a);
		}
		else{
			printf("La palabra es muy grande \n");
		}
	}
	int largo=strlen(b);	
	camb=33+largo;
	if (camb>126){
		camb=126;
	}
	fprintf(f,"Cadena concatenada:%s \n",b);
	fprintf(f,"Comparador: %c \n",comp);
	fprintf(f,"Cambiador: %c \n",camb);
	for(k=0;k<largo;k++){
		if(b[k]==comp){
			b[k]=camb;
		}
	}
	fprintf(f,"Cadena modificada: %s \n",b);
	

	fclose(f);
}
