#include <stdio.h>
int main() {
int a,b,x;
printf("Ingrese dividendo");
scanf("%d",&a);
printf("Ingrese divisor");
scanf("%d",&b);
for (x;a>0;x++){
	a-=b;
}
if (a<0){
	a+=b;
}

printf("el modulo es %d \n",a);

return 0;
//Sergio Troncoso//

}
