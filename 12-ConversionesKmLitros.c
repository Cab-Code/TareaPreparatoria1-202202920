#include <stdio.h>

int main(){
     int op;
    float entrada, salida;
    printf("----------------------------------------------------\n");
    printf("----------------------------------------------------\n");
    printf("1) Convertir Kilometro por Litro --> Milla por galon\n");
    printf("----------------------------------------------------\n");
    printf("2) Convertir Milla por Galon --> Kilometro por litro\n");
    printf("----------------------------------------------------\n");
    printf("----------------------------------------------------\n");
        scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Ingrese la gcantidad de Kilometros por Litro: \n");
            scanf("%f", &entrada);
        salida = entrada * (1 / 1.609344) * (4.54609188);

        printf("%.4f km/L   =   %.4f Mi/gal", entrada, salida);
        break;
    case 2:
        printf("Ingrese la gcantidad de Millas por Galon: \n");
            scanf("%f", &entrada);
        salida = entrada * 1.609344 * 1 / 4.54609188;

        printf("%.4f km/L   =   %.4f Mi/gal", entrada, salida);
        break;
    
    default:
        printf("Opcion no valida");
        break;
    }

    return 0;
}