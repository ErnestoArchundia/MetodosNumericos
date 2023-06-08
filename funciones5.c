#include <stdio.h>
#include <string.h>

int main(){
    int a[20];
    int len, div;
    printf("INGRESA UNA PALABRA; \n");
    scanf("%s", a);
    printf("%s", a);
    len = strlen(a);
    div = len/2;

    for(int i=0; i<div ; i++){
        aux = a[i];
        a[i] = a[len-i-1];
        a[len-i-1] = aux; 
    }
    printf("%s", a);
    return 0;
}