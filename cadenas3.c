#include <stdio.h>

int main(){
   
    int len;
    char cad[20];
    printf("INTRODUCE UNA PALABRA \n");
    scanf("%s", cad);
    len = strlen(cad);
    printf("LA LONGITUD DE: \'%s\' es: %d\n", cad, len);

    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}