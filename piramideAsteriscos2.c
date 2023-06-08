# include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    printf("INGRESA UN NUMERO");
    scanf("%d", &a);

    for(int i = 1; i<=a; i++){
        for(int j = 0; j<i; j++){
            printf("*");
        }
        printf("    ");
        for(int k = a; k>=i; k--){
            printf("*");
        }
        printf("\n");
    }
}