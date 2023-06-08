#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int sueldo, b;


    printf("INGRESA EL NUMERO DE AÑOS QUE LLEVAS LABORANDO");
    scanf("%d", &a);
    printf("INGRESA TU SUELDO");
    scanf("%d", &sueldo);

    if(a >= 5){
        b = (sueldo*100)/10;
        if(b > 1000){
            printf("!FELICIDADES CREDITO APROVADO!\n");
        }
    }
    return 0;
}//fin main