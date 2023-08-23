#include <stdio.h>

int main(){
    int n;
    printf("--------------------------\n");
    printf("----¿Es un numero par?----\n");
    printf("--------------------------\n");

    printf("\n Ingrese un numero entero:\n");
        scanf("%d", &n);
    
    if(n % 2 == 0){
        printf("Si, %d es un numero par", n);
    }else{
        printf("No, %d no es un numero par", n);

    }

return 0;

}