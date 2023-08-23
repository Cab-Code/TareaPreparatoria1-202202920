#include <stdio.h>

int main() {
    double angulo;
    int n = 100;
    int op;
    double seno;
    double potencia;
    float factorial = 1;
    double guardado;
    
    printf("-------------------------------\n");
    printf("1) angulo en radianes ---------\n");
    printf("2) angulo sexagesimal ---------\n");
    printf("-------------------------------\n");
        scanf("%d",&op);
    
    switch (op)
    {
    case 1:
    printf("Ingrese el angulo en readianes sin pi\n (Se multiplicara automaticamentepor pi)\n");
        scanf("%lf", &angulo);
        angulo = angulo * 3.141592;
        seno = angulo;
        potencia = angulo;

        for (int i = 1; i < n; i++) {
        potencia *= -angulo * angulo;
        factorial *= (2 * i) * (2 * i + 1);
        seno += potencia / factorial;
        }

    printf("El seno de %.2lf radianes es aproximadamente %.6lf\n", angulo, seno);
        
        break;
    case 2:
    printf("Ingrese el angulo en Grados sexagesimales\n");
        scanf("%lf", &angulo);
        guardado = angulo;
        angulo = angulo * 3.141592/180;
        seno = angulo;
        potencia = angulo;

        for (int i = 1; i < n; i++) {
        potencia *= -angulo * angulo;
        factorial *= (2 * i) * (2 * i + 1);
        seno += potencia / factorial;
        }

    printf("El seno de %.2lf grados sexagesimales es aproximadamente %.6lf\n", guardado, seno);
        
        break;
    
    default:
        printf("Opcion no valida \n");
        printf("Cerrando programa...\n");
        break;
    }

    return 0;
}
