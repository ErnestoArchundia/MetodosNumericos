#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    char x = '* * * *';
    int num;

    printf("INGRESA UN NUMERO");
    scanf("%d", &num);

     for(i = 1; i<=num; i++){
        printf(" %c ", x);

        
     }

     system("Pause");
    return 0;
}//FIN DEL ARREGLO