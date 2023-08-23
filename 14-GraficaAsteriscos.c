#include <stdio.h>

int main(){
    int  n;
    printf("¿Cuantas filas tendra la grafica?\n");
        scanf("%d", &n);
    int i;
    for(i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
     printf("\n");
    }
    return 0;
}