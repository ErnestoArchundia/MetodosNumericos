#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("INGRESA EL NUMERO QUE GUSTES ");
    scanf("%d", &num);
    printf("------TABLA DEL %d -------\n\n", num);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d =  %d \n", num, i, num * i );
    }

    system("Pause");
    return 0;
}//fin main
