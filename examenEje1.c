# include <stdio.h>

int main(){
    
    int contador;
    double multiplicacion = 1;
    int promedio = 0;
    double resultado;
    int a[19];

    for(int i=0; i<=19; i++){
        contador = i + 1;
        printf("a[%d] = %d \n", i, contador);
        multiplicacion = multiplicacion * contador;
        promedio = promedio + contador;

    }
    resultado = promedio/20.0;
    printf("EL PROMEDIO ES %f \n", resultado);
    printf("LA MULTIPLICACION ES %f ", multiplicacion);

    return 0 ;

}