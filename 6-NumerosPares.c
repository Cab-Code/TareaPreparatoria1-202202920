#include <stdio.h>

int main(){

    int numIni, numFin,i, contador;

    printf("Ingrese un numero entero Inicial:\n");
        scanf("%d", &numIni);
    printf("Ingrese el numero entero Final: \n");
        scanf("%d", &numFin);
        if(numFin < numIni){
            printf("En numero final debe ser mayor que el inicial");
        }else{
            for(i = numIni; i < numFin; i++){
                    if(i%2 == 0){
                    contador++;
                }
            }
            printf("Entre %d y %d Hay %d numeros pares", numIni, numFin, contador);
        }
    
    

return 0;
}

