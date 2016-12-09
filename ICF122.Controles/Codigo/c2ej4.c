#include <stdio.h>
int main(){
int valor, pagar,vuelto,aux1,aux2,aux3,aux4;
printf("Ingrese valor a pagar: \n");
scanf("%d",&valor);
printf("Ingrese billete con el que se pagara: \n");
scanf("%d",&pagar);
vuelto=pagar-valor;
printf("Su vuelto es %d \n",vuelto);
aux1=0;
aux2=0;
aux3=0;
aux4=0;

if(vuelto/500>=1){
aux1=vuelto/500;
vuelto=vuelto-aux1*500;
}
if(vuelto/100>=1){
aux2=vuelto/100;
vuelto=vuelto-aux2*100;
}
if(vuelto/50>=1){
aux3=vuelto/50;
vuelto=vuelto-aux3*50;
}
if(vuelto/10>=1){
aux4=vuelto/10;
vuelto=vuelto-aux4*10;
}
printf("%d monedas de 500, %d monedas de 100, %d monedas de 50, %d monedas 10 \n", aux1,aux2,aux3,aux4);
return 0;
//SERGIO TRONCOSO//
}
