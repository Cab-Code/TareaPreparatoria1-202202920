#include <stdio.h>

int main(){
    char cadena[100];
    int num[100];
    int desp = 0;
    int acssi = 0;

    printf("-----------------------------\n");
    printf("------Codificador-Cesar------\n");
    printf("-----------------------------\n");
    printf("Ingrese unnumero de desplazamiento\n");
        scanf("%d", &desp);
    printf("Ingrese una cadena de texto\n (Sin Espacios o caracteres especiales y solo en MAYUSCULAS)\n");
        scanf("%s", cadena);
    
    int i = 0;
    for(i = 0; i < 100; i++){
        acssi = cadena[i] - '0';
        if(acssi >= 17 && acssi <= 42){
            if(acssi - 42 > desp){
            num[i] = acssi - 26 + desp;
            }
        else{
            num[i] = acssi + desp;
        }
        }
    }
    for(i = 0; i < 100; i++){
        if(num[i] >= 17 && num[i] <= 42){
            cadena[i] = num[i] + '0';
        }
    }
    printf("La Codificacion de la cadena es:\n");
    printf("%s",cadena);

    return 0;    
}