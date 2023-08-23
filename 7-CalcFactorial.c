#include <stdio.h>

int main(){
    int numero, factorial;
    printf("--------------------------------------\n");
    printf("-------Calculadora de factorial-------\n");
    printf("--------------------------------------\n");
    printf("Ingrese un numero entero:\n");
        scanf("%d", &numero);
    int i;
    factorial = 1;
    for(i = 1; i <= numero; i++){
        factorial = factorial * i;
    }
    printf("%d! = %d",numero, factorial);
    return 0;
}