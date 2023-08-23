#include <stdio.h>

int main(){
    int matrizInput[100];
    int elem;
    int estado;
    int matrizOutput[100];
    int n;
    int k = 0;

    printf("¿Cuantos numeos desea ingresar a la matriz?\n");
        scanf("%d", &n);
    
    printf("Ingrese el numero y luego presione enter:\n");
    int i;

    for(i = 0; i < n; i++){
        estado = 0;
        scanf("%d", &elem);
        int j = 0;
        for(j = 0; j <= i; j++){
            if(elem == matrizInput[j]){
                estado = 4;
            }
    }
    if(estado != 4 ){
            matrizInput[i] = elem;
        }else{
            matrizOutput[k] = elem;
            k++;
        }
    }
        printf("Matriz de numeros repetidos:\n");
        printf("[");
        for(i = 0; i < k; i++){
            printf(" %d ",matrizOutput[i]);
        }
        printf("]");


return 0;
}