#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c,x1,x2,det;
printf("Ingrese valor para a \n");
scanf("%f",&a);
printf("Ingrese valor para c \n");
scanf("%f",&b);
printf("Ingrese valor para b \n");
scanf("%f",&c);
det= b*b-4*a*c;
if(a!=0){
	if(det<0)
		printf("No existe solución /n");
	else if(det==0){
		x1= -b/(2*a);
		printf("Existe solo una solución X= %f,x1 /n",x1);
	}
	else {
		x1= (-b + sqrt(det))/(2*a);
		x2= (-b - sqrt(det))/(2*a);
		printf("Existen soluciones x1= %f, x2= %f \n",x1,x2);
	}
}
else
	printf("No es una funcion cuadratica /n");
return 0;
//Sergio Troncoso//
}
