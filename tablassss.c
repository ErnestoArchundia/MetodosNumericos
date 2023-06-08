#include <stdio.h>
#include <stdlib.h>

int main(){
    int columnas;
    printf("INGRESA EL NUMERO QUE GUSTES");
    scanf("%d", &columnas);

    int a[columnas][columnas];

    for(int i = 1; i <= columnas; i++){
        for(int j = 1; j <= columnas; j++){
            a[i][j] = i * j;
            printf("%d \t ",  a[i][j]);
        }
        printf("\n");
    }

    system("Pause");
    return 0;
}//fin main