#include <stdio.h>

/*Estuardo Andres Cabrera Catalan 
202202920*/

int main(){

    int op = 0;
    int cantidad = 0;
    float resultado = 0;
    int i = 0 ;
    float j = 0;

    printf("----------------------\n");
    printf("1.)  sumar -----------\n");
    printf("2.)  multiplicar------\n");
    printf("---------------------\n\n");

    scanf("%d", &op);
   
   switch (op)
   {
   case 1:
    printf("¿Cuantos numeros desea sumar?\n");
        scanf("%d", &cantidad);
    printf("para ingresar un numero escribalo con su teclado y luego precione enter\n");

    while(i < cantidad){
        scanf("%f", &j);
        resultado = resultado + j;

        i++;
    }
    printf("El resultado de la suma es: %.3f\n", resultado);
    printf("---------------------\n\n");
   
    break;
   case 2:
   printf("¿Cuantos numeros desea multiplicar?\n");
        scanf("%d", &cantidad);
    printf("para ingresar un numero escribalo con su teclado y luego precione enter\n");
    resultado = 1;
    while(i < cantidad){
        scanf("%f", &j);
        resultado = resultado * j;

        i++;
    }
    printf("El resultado de la multiplicacion es: %.3f\n", resultado);
    printf("---------------------\n\n");

    break;
   default:
    printf("\nOperacion no valida");
    printf("\nCerrando del programa...");
    break;
   }
    return 0;
}
