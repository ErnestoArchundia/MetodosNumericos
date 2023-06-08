#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int i;
    int suma;

    printf("INGRESA UN NUMERO");
    scanf("%d", &x);


    for(i = 1; i<=x; i++){

        printf("%d + ", i );
        suma = suma + i; 

    }
      printf(" = %d ", suma);
    return 0;
}//fin main