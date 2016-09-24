#include <stdio.h>
int main(){
float u,x;
printf("Ingrese un numero \n");
scanf("%f",&x);
printf("Ingrese el umbral \n");
scanf("%f",&u);
if (x<=u)
printf("El numero %f es menor o igual al umbral \n",x);
else
printf("El numero %f es mayor al umbral \n",x);
return 0;
//Sergio Troncoso//
}
