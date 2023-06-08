#include <stdio.h>
#include <string.h>

int main(){
    int len;
    int a;
    char palabra1[20];
    char palabra2[20];
    
    printf("INTRODUCE UNA PRIMERA PALABRA PALABRA \n");
    scanf("%s", palabra1);
    printf("INTRODUCE UNA SEGUNDA PALABRA \n");
    scanf("%s", palabra2);
    len = strlen(palabra1);
    for(int i=0; i<len; i++){
        strcat(palabra1, palabra2);
    }
    printf("%s ", palabra1);
    
}