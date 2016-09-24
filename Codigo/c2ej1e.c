#include <stdio.h>
int main(){
char c,a,e;
char i,o,u;
printf("Ingrese una letra \n");
scanf("%c",&c);
a='a';
e='e';
i='i';
o='o';
u='u';
if (c==a || c==e || c==i || c==o ||c==u){
printf("La letra %c es una vocal \n",c);
}
else{
printf("La letra %c es una consonante \n",c);
}
return 0;
//Sergio Troncoso//
}
