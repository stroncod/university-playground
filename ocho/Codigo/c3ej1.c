#include <stdio.h>
#include <stdlib.h>
int main(){
	int g,aux,a;
	srand(time(NULL));
	g= rand();
	printf("%d\n",g);


	while(g>0){

	a=g%10;
	g= g/10;
	printf("%d",a);

	}
printf("\n");

return 0;
//Sergio Troncoso//
}
