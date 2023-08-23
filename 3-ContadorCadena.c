#include <stdio.h>

int main(){

    char cadena[100];
    int conteo;

    printf("ingrese una cadena de texto (Sin espacios)\n");
        scanf("%s", cadena);
    
    int i;
    
    for(i = 0; i < 100; i++){
        if(cadena[i] != '\n'){
            conteo++;
        }
    }
    printf("%d", conteo);
    return 0;
}
