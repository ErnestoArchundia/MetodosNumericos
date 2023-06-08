#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[11][11];

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            a[i][j] = i * j;
            printf("%d ",  a[i][j]);
        }
        printf("\n");
    }

    system("Pause");
    return 0;
}//fin main