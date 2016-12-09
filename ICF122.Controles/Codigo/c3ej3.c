#include <stdio.h>
int main(){
int n,c,b,i,i2;
printf("Ingrese un numero");
scanf("%d",&n);
b=0;
c=0;
for (i=1;i<n;i++){
	if(n%i==0){
		b+=i;
	}
}
for(i2=1;i2<b;i2++){
	if(b%i2==0){
		c+=i2;
	}
}
if(c==b){
	printf("%d,La suma de los divisores es %d, y la suma de los divisores de %d da %d, como %d=%d, Cumple las condiciones\n",n,b,b,c,b,c);
}
else{
	printf("%d, La suma de los divisores es %d, y la suma de los divisores de los divisores de %d da %d, como %d es diferente de %d, no cumple las condiciones \n",n,b,b,c,b,c);
}
return 0;
//Sergio Troncoso//
}
