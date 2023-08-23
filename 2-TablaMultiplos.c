#include <stdio.h>

int main(){

    float numero;

    printf("-----Generador-de-tablas de multiplicar-----\n");
    printf("--------------------------------------------\n");
    printf("--------------------------------------------\n\n");

    printf("Ingrese un numero\n");
        scanf("%f", &numero);
    int i;
    for(i = 0; i <= 12; i++){
        printf("---  %.2f * %i = %.2f  ---\n", numero, i, numero * i);
    }

    return 0;
}