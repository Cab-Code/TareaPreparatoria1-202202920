#include <stdio.h>

int main(){
    int op;
    float volumen;

    printf("--------------------------------\n");
    printf("----Calculadora De Volumenes----\n");
    printf("--------------------------------\n");
    printf("1.) Cubo------------------------\n");
    printf("2.) Esfera----------------------\n");
    printf("3.) Piramide Base Triangular----\n");
    printf("4.) Piramide Base Cuadrada------\n");
    printf("--------------------------------\n");
     scanf("%d", &op);

    switch (op)
    {
    case 1:
        float lado;
        printf("Ingrese la medida del lado del cubo:\n");
            scanf("%f", &lado);
        volumen = lado * lado * lado;
        printf("El volumen del cubo de lado %.3f es %.3f", lado, volumen);
        break;
    case 2:
        float radio;
        printf("Ingrese la medida del radio de la esfera:\n");
            scanf("%f", &radio);
        volumen = 4 * (radio * radio * radio) * 3.141592 / 3;
        printf("El volumen de la esfera de radio %.3f es %.3f", radio, volumen);
        break;
    case 3:
        float h;
        float arista;
        printf("Ingrese la altura de la piramide:\n");
            scanf("%f", &h);
        printf("Ingrese la medida de la arista de la piramide:\n");
            scanf("%f", &arista);
        volumen = 1.73200808 * (arista * arista) * h / 12;
        printf("El volumen de la piramide triangular de altura %.3f y arista %.3f es %.3f", h, arista, volumen);
        break;
    case 4:
        float hc;
        float aristaC;
        printf("Ingrese la altura de la piramide:\n");
            scanf("%f", &hc);
        printf("Ingrese la medida del lado de la base de la piramide:\n");
            scanf("%f",&aristaC);
        volumen =(aristaC * aristaC) * hc / 3;
        printf("El volumen de la piramide triangular de altura %.3f y arista %.3f es %.3f", h, arista, volumen);
        break;
    default:
        printf("\nLa opcion %d no existe \n",op);
        printf("\nCerrando programa... \n");
        break;
    }


    return 0;
}