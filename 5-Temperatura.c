#include <stdio.h>

int main(){

int option;
float temperatura;
int on = 1;

while (on) {
    printf("----------Convertidor de Celcius a Farenheight----------\n");
    printf("-Seleccione la conversion:  ----------------------------\n");
    printf("1. Celcius a Farenheight\n");
    printf("2.  Farenheight a Celcius\n");
    printf("3.  salir \n");

    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("ingrese la temperatura en Celcius:\n");
                scanf("%f", &temperatura);
            temperatura = (temperatura * 9/5) + 32;
            printf("La temperatura en farenheit es:  %.4f \n",temperatura);
        break;
        case 2:
            printf("ingrese la temperatura en farenheit:\n");
                scanf("%f", &temperatura);
            temperatura = (temperatura - 32) * 5/9;
            printf("La temperatura en celcius es:  %.4f",temperatura);
        break;
        case 3:
            printf("saliendo...");
            on = 0;

        break;

        default:
            printf("introdusca una opcion valida");
        break;

    }


}

    return 0;
}