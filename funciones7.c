#include <stdio.h>
#include <string.h>
//palindroma
int main(){
    char a[20];
    int div, len;
    printf("INGRESA UNA PALABRA; \n");
    scanf("%s", a);
    printf("%s", a);

    len = strlen(a);
    div = len/2;

    if(a[div] == a[div]){
        printf("%s es palindroma", a);
    }
    
    return 0;
}