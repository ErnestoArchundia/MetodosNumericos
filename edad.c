#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, edad;


    printf("INGRESA LA CONTIDAD DE AÑOS VIVIDOS");
    scanf("%d", &a);

    edad = a * 365 * 24 * 60 * 60;
    printf("%d SEGUNDOS VIVIDOS", edad);

    system("Pause");
    return 0;
}//fin main