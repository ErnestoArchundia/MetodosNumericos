#include <stdio.h>
#include <string.h>

int main(){
   
    char palabra1[20];
    char palabra2[20];
    char aux[20];
    printf("INTRODUCE UNA PRIMERA PALABRA PALABRA \n");
    scanf("%s", palabra1);
    printf("INTRODUCE UNA SEGUNDA PALABRA \n");
    scanf("%s", palabra2);
    printf(" ANTES \n");
    printf("%s \n", palabra1);
    printf("%s \n", palabra2);
    strcpy(aux, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, aux);
    printf(" DESPUES \n");
    printf("%s \n", palabra1);
    printf("%s \n", aux);


    
    return 0;
}