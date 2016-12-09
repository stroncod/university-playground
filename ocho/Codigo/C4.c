#include <stdio.h>
#include <math.h>
float pi=3.1416;


float pcuadrado(){
	float l,pcuad;
	printf("Ingrese el lado\n");
	scanf("%f",&l);
	pcuad=4*l;
	return pcuad;
}
float pcirculo(){
	float r,pcirc;
	printf("Ingrese el radio\n");
	scanf("%f",&r);
	pcirc = 2*pi*r;
	return pcirc;
}
float prectan(){
	float l,a,prectan;
	printf("Ingrese el lado\n");
	scanf("%f",&l);
	printf("Ingrese el ancho\n");
	scanf("%f",&a);
	prectan=2*l+2*a;
	return prectan;
}
float ptrian(){
	float l1,l2,l3,ptrian;
	printf("Ingrese el lado\n");
	scanf("%f",&l1);
	printf("Ingrese el lado\n");
	scanf("%f",&l2);
	printf("Ingrese el lado\n");
	scanf("%f",&l3);
	ptrian=l1+l2+l3;
	return ptrian;
}
float acuadrado(){
	float l,acuad;
	printf("Ingrese el lado\n");
	scanf("%f",&l);
	acuad=l*l;
	return acuad;
}
float acirculo(){
	float r,acirc;
	printf("Ingrese el radio\n");
	scanf("%f",&r);
	acirc=pi*r*r;
	return acirc;
}
float arectan(){
	float l,a,arectan;
	printf("Ingrese el lado\n");
	scanf("%f",&l);
	printf("Ingrese el ancho\n");
	scanf("%f",&a);
	arectan=a*l;
	return arectan;
}
float atrian(){
	float b,h,atrian;
	printf("Ingrese la altura\n");
	scanf("%f",&h);
	printf("Ingrese la base\n");
	scanf("%f",&b);
	atrian=(b*h)/2;
	return atrian;
}
int main(){
int op,op2,i,malas;
float a,b,estim,rend,dif,buenas,total,rendt;
buenas=0;
malas=0;
total=0;
printf("Ingrese rendimiento entre 1 y 100:\n");
scanf("%f",&rend);

while(op!=5){
	printf("Ingrese \n 1.Cuadrado \n 2.Circulo \n 3.Rectangulo \n 4.Triangulo \n 5.Salir \n");
	scanf("%d",&op);

	if(op==1){
		printf("Ingrese \n 1.Perimetro \n 2.Area \n");
		scanf("%d",&op2);
		if(op2==1){
			a=pcuadrado();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=a+3 && estim>=a-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
		
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;
		}
		if(op2==2){
			b=acuadrado();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=b+3 && estim>=b-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
		
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;
		}
		else{
			printf("Ingrese una alternativa valida!\n");
		}
	continue;
	total++;
	}
	if(op==2){
		printf("Ingrese\n 1.Perimetro \n 2.Area \n");
		scanf("%d",&op2);
		if(op2==1){
			a=pcirculo();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=a+3 && estim>=a-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
		
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;	
		}
		if(op2==2){
			b=acirculo();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=b+3 && estim>=b-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
		
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;
		}
		else{
			printf("Ingrese una alternativa valida!\n");
		}
	continue;
	total++;
	}
	if(op==3){
		printf("Ingrese \n 1.Perimetro \n 2.Area \n");
		scanf("%d",&op2);
		if(op2==1){
			a=prectan();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=a+3 && estim>=a-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;
		}
		if(op2==2){
			b=arectan();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=b+3 && estim>=b-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
		
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;
		}
		else{
			printf("Ingrese una alternativa valida!\n");
		}
	continue;
	total++;
	}
	if(op==4){
		printf("Ingrese \n 1.Perimetro \n 2.Area \n");
		scanf("%d",&op2);
		if(op2==1){
			a=ptrian();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=a+3 && estim>=a-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;
		}
		if(op2==2){
			b=atrian();
			printf("Que resultado estima? \n");
			scanf("%f",&estim);
			if (estim<=b+3 && estim>=b-3){
				printf("Esta bueno!\n");
				i++;
				buenas++;
				continue;
			}
		
			else{
				printf("Es malo!\n");
				malas++;
			}
		continue;
		}
		else{
			printf("Ingrese una alternativa valida!\n");
		}
	continue;
	total++;
	}
	
	if (op==5){
		break;
	}
	else{
		printf("Ingrese una opcion valida!\n");
		
	}

}


rendt=rend-i;
printf("Tus respuestas buenas fueron: %f \n",buenas);
printf("Tus respuestas malas fueron: %d \n",malas);
if(buenas>=0 && buenas<=5){
	printf("Tu nivel es mediocre \n");
}
if(buenas>5 && buenas<=10){
	printf("Tu nivel es normal \n");
}
if(buenas>10){
	printf("Tu nivel es dios\n");
}

printf("Tu rendimiento vario en: %f \n",rendt);
return 0;
}
		
		
