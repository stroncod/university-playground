//Sergio Troncoso//
#include <stdio.h>

int teorema(int n){
	int i;
	if(n==0 || n==1){
		return 1;
	}else{
		for(i=2;i<=n;i++){
			if(n%i==0){
				printf("%d \n",i);
				return teorema(n/i);
			}
		}
	}
}

int main(){
	int n;
	printf("Ingrese un numero: \n");
	scanf("%d",&n);
	teorema(n);
	return 0;
}	
