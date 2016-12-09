	#include <stdio.h>
int main(){
int x,y,z;
printf("Ingrese un numero \n");
scanf("%d",&x);
printf("Ingrese otro numero \n");
scanf("%d",&y);
printf("Ingrese otro numero \n");
scanf("%d",&z);
if (x<y && y<z && x<z)
printf("De menor a mayor:%d,%d,%d \n",x,y,z);

else if (x<=z && z<=y && x<=y){
printf("De menor a mayor:%d,%d,%d \n",x,z,y);
}
else if(y<=x && x<=z && y<=z){
printf("De menor a mayor:%d,%d,%d \n",y,x,z);
}
else if (y<z && z<x && y<=x){
printf("De menor a mayor:%d,%d,%d \n",y,z,x);
}
else if(z<=x && x<=y && z<=y){
printf("De menor a mayor:%d,%d,%d \n",z,x,y);
}
else if(z<=y && y<=x && z<=x){
printf("De menor a mayor:%d,%d,%d \n",z,y,x);
}
return 0;
//Sergio Troncoso//
}
