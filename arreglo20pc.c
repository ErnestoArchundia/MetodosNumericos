#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[20];
    int x, i;
    int contador = 0;
    double resultado;
    double multiplicacion = 1;

    //LLENAR ARREGLO
    while(i<20){
        x = i + 1;
        printf("a[%d] = %d\n", i, x);
        contador = contador + x;
        multiplicacion = multiplicacion * x;
        i++;
    }
    resultado = contador/20.0;
    printf("EL PROMEDIO ES %f\n", resultado);
    printf("RESULTADO DE LA MULTIPLICACION %f \n", multiplicacion);
    return 0;
}//fin main