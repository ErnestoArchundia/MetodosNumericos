#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, x, y;


    printf("INGRESA UN NUMERO");
    scanf("%d", &x);

    for(i = 1; i<5; i++){
        y = x*i;
        for(j = 0; j<=3; j++){
            printf("%d \t", y+j);
            y++;
        }
        printf("\n");
    }
    return 0;
}//fin main