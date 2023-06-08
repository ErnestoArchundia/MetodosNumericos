#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;

    printf("INGRESA LA CALIFICACION DEL EXAMEN");
    scanf("%d", &c);

    if(c >= 8){
        printf("!FELICIDADES APROVASTE EL CURSO!\n");
    }
    return 0;
}//fin main