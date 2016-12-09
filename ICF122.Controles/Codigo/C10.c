//SERGIO TRONCOSO//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int** generar_matriz(int n){
    int i;
    int **a;
    
    printf("De que largo quiere la matriz? \n");
    scanf("%d",&n);
    if (n>10 || n<0)
    {
        printf("Error en largo de matriz\n");
    }
    a=calloc(n,sizeof(int*));
    for (i=0;i<n;i++){
        a[i]=calloc(n,sizeof(int));
    }
    return a;
    
}  

int contador(int **a, int n, int validador){
    int i,j;
    int cont=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j]==validador)
            {
                cont++;
            }
        }
    }
    return cont;
} 
          
int main (){
    int **a;
    int k;
    int aux,cant,aux2,aux3;
    FILE*f=fopen("entrada.txt","r");
    FILE*g=fopen("salida.txt","w");
    if (f==NULL || g==NULL){ 
        printf("Error al crear o abrir archivo\n");
        exit(1);
    }
    a=generar_matriz(n);
    
    for(i=0;i<n;i++){    
        for(j=0;j<n;j++){
               fscanf(f,"%d",&a[i][j]);       
        }
        
    }
    while(k<20){
            cant=contador(a,n,k);
            aux=cant;
            if (cant>aux)
            {   
                aux2=aux;
                aux3=k;
            }
            k++;
        }
    for (i = 0; i < n; i++)
    {
        for (j= 0; j < n; j++)
        {
            if (k!=a[i][j])
            {
                fprintf(g, "%2d",a[i][j]);
            }
            
        }
        fprintf(g, "\n");
    }
           
    for(i=0;i<n;i++){
        free(a[i]);
    }
    free(a);
    fclose(f);
    fclose(g);

    return 0;

}        
        
           
    
