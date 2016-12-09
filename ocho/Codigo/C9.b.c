#include <stdio.h>
int caracolito (int numero, int tiempo)
{
	if (numero==0)
	{
		return tiempo;
	}
	else if (numero>0 && numero<=3)
	{
		tiempo +=numero;
		numero=numero-numero;
		return caracolito(numero,tiempo);
	}
	else
	{
		tiempo+=5;
		numero-=1;
		return caracolito(numero,tiempo);
	}
}

int main(int argc, char const *argv[])
{
	int distancia,tiempo=0,total;
	printf("Ingrese recorrido del caracol\n");
	scanf("%d",&distancia);
	total=caracolito(distancia,tiempo);
	printf("Se demoro: %d \n",total);

	return 0;
}