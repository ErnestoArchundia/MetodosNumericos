#include <stdio.h>
#include <stdlib.h>

int main(){
    int hrs;
    int phr, b;


    printf("INGRESA EL NUMERO DE HORAS LABORADAS");
    scanf("%d", &hrs);
    printf("INGRESA EL PRECIO POR HORA");
    scanf("%d", &phr);

    if(hrs <= 40){
        b = hrs * 40;
        printf("TU SALARIO ES %d\n", b);
    }else{
        b = 40 * phr + ( phr * 1.5 *(hrs-40));
        printf("TU SALIARIO FINAL ES %d\n", b);
    }
    return 0;
}//fin main