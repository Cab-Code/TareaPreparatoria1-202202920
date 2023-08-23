#include <stdio.h>

int main(){
    int num, numDes, numAnt, n;

    printf("¿Cuantos numeros de fibonacci desea general?\n");
        scanf("%d", &n);
    int i;
    num = 1;
    numAnt = 0;
    printf("Serie Fibonacci hasta %d repeticiones \n", n);
    for(i = 0; i < n; i++){
        numDes = num + numAnt;
        printf("%d \n", numDes);
        numAnt = num;
        num = numDes;
    }

}