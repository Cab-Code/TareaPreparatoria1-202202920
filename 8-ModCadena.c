#include <stdio.h>

int main(){
    char cadena[100];
    char modCadena[200];
    char modCadenaDos[200];
    char final[200];
    char elem = '*';

    printf("Ingrese una Cadena de texto: \n");
        scanf("%s", cadena);
    int i = 0;
    int j = 0;
    while(i < 100){
        
        if(i % 2 == 0){
            modCadena[i] = elem;
            j++;
        }else{
            modCadena[i] = cadena[i - j];
        }
        i++;
        }
     i = 0;
     j = 0;
    while(i < 100){
        
        if(i % 2 == 0){
           modCadenaDos[i] = cadena[i - j];
            j++;
        }else{
            
            modCadenaDos[i] = elem;
        }
        i++;
    }
    
    
    for(i = 0; i < 100; i++){
        if(i % 2 == 0){
            
            final[i] = modCadenaDos[i];
        }else{
            final[i] = modCadena[i];
        }
    }
    printf("%s\n", modCadena);
    printf("%s <---\n ", modCadenaDos);
    printf("%s\n", final);
    return 0;
}