#include <stdio.h>
#include <stdlib.h>

int main(){
    int cuadrado;
    int cubo;
    int i = 1;
    while (i <= 500){
        cuadrado = i * i;
        cubo = i * i * i;
        printf("%d, %d, %d\n", i, cuadrado, cubo);
        i++;
    }
    return 0;
}//fin main