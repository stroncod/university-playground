//SERGIO TRONCOSO//
#include <stdio.h>
#include <stdlib.h>

struct estructura
	{
		int a;
		int b;
		int r;
	}; typedef struct estructura srct;

srct *suma (srct *arreglo, int cont)
{
	int i;
	for (i = 0; i < cont; i++)
	{
		arreglo[i].r = arreglo[i].a + arreglo[i].b;
 	}
 	return arreglo;
}

srct *resta(srct *arreglo, int cont)
{
	int i;
	for (i = 0; i < cont; i++)
	{
		arreglo[i].r = arreglo[i].a - arreglo[i].b;
	}
	return arreglo;
} 
void burbuja(srct Arr[], int TAM){
	int i, j;
	int temp;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			if(Arr[j].r > Arr[j+1].r){
			temp = Arr[j].r;
			Arr[j].r = Arr[j+1].r;
			Arr[j+1].r = temp;
			}
		}
	}
}



int main(int argc, char const *argv[])
{
	int cont=0,i;
	srct *arreglo;
	FILE*f=fopen("numeros.txt","r");
	
	if (f==NULL)
	{
		printf("Error de archivo\n");
		exit(1);
	}

	while (fgetc(f) != EOF){
		if (fgetc(f)=="\n")
		{
			cont++;
		}
	}
	rewind(f);
	arreglo= (srct*)malloc(sizeof(int)*cont);
	for (i = 0; i < cont; i++)
	{
		fscanf(f,"%i %i",&arreglo[i].a, &arreglo[i].b);
	}
	int op;
	printf("1. Suma\n 2.Resta\n");
	scanf("%d", &op);
	if (op == 1)
	{
		suma(arreglo,cont);
	}
	else if (op==2)
	{
		resta(arreglo,cont);
	}
	else{
		printf("Opcion incorrecta\n");
	}
	
	burbuja(arreglo,cont);

	int busc;
	printf("Que número quiere buscar? \n");
	scanf("%d",&busc);

	for (i = 0; i < cont; i++)
	{
		if (arreglo[i].r==busc)
		{
			printf("El numero %d esta en la posicion %d \n",busc,i);
			break;
		}
		if (i==cont)
		{
			printf("El numero %d no esta en el arreglo\n",busc);
		}
	}

	for(i=0; i<cont; i++)
	{
		printf("%i\n", arreglo[i].r);
	}
	free(arreglo);
	fclose(f);
	
	return 0; 
}
