#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    printf("INGRESA UN VALOR PARA M");
    scanf("%d", &a);
    printf("INGRESA UN VALOR PARA N");
    scanf("%d", &b);

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("%d \t", i * j );
        }
        printf("\n");
    }

}