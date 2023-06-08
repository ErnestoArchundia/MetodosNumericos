#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[];
    int n, num, aux;

    printf("INGRESA EL TAMAÑO DEL ARREGLO \n");
    scanf("%d", &n);
    n = a[];
    for(int i = 0; i<n ; i++){
        printf("INGRESA EL VALOR PARA a[%d]\n", i);
        scanf("%d", &num);
        printf("a[ %d ] \t", num);
    }
    for(int j=0; j<n-1; j++){
        for(int k=0; k<n-j-1; k++ ){
            if(a[k+1]>a[j]){
                aux = a[k+1];
                a[j+1] = a[j];
                a[j] = aux;
            }
        }
        printf("a[ %d ]  ", a[j]);
    }




}