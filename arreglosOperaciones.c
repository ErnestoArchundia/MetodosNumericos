#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    int x, i;
    int b[10];
    int y, j;

    //LLENAR PRIMER ARREGLO
    while (i<10){
        printf("INGRESA EL VALOR PARA a[%d]",i);
        scanf("%d", &x);
        a[i]=x;
        i++;
    }
    printf("\n\n");

    //LLENAR SEGUNDO ARREGLO
    while (j<10){
        printf("INGRESA EL VALOR PARA b[%d]",j);
        scanf("%d", &y);
        b[j]=y;
        j++;
    }

    printf("A[3] mod (B[2]/2) = %d\n", a[3]%(b[2]/2));
    printf("B[A[1]] - A[9] = %d\n", b[a[1]]-a[9]);
    printf("A[0] + A[1+2] = %d\n", a[0]+a[1+2]);
    printf("A[5] + B[5] = %d\n", a[5]+b[5]);
    printf("(A[3]/B[2])/2 = %d\n", (a[3]/b[2])/2);
    
    return 0;
}//fin main