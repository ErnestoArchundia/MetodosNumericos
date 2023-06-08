#include <stdio.h>
#include <stdlib.h>

int main(){
    int m;

    printf("INGRESA UN NUMERO M");
    scanf("%d", &m);

    for (int i=1; i <= m; i++){
        for (int j=0; j<i; j++){
            printf("*");

        }
        printf("   ");

        for(int k = m; k >= i; k--){
                printf("*");
            }
        printf("\n");
        
    }
    return 0;
}//FIN DEL ARREGLO