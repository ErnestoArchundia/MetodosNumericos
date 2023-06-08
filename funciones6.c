#include <stdio.h>
#include <string.h>
//ocurrencias 
int main(){
    char palabra[30];
    int letras[30]={0};
    int len;

    printf("INGRESA UNA PALABRA; \n");
    
    scanf("%s", palabra);
    len = strlen(palabra);
    for(int i=0; i<len; i++){
        letras[palabra[i]-'a']++;
    }
    for(int j=0; j<30 ; j++){
        if(letras[j]>0){
            printf("%c: %d\n", 'a' + j, letras[j]);
        }
    }
    return 0;
}