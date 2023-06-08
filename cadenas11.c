#include <stdio.h>
#include <string.h>

int main(){
    int res;
    int len1, len2;
    char str1[20];
    char str2[20];

    printf("INTRODUCE UNA PRIMERA PALABRA \n");
    scanf("%s", str1);
    printf("INTRODUCE UNA SEGUNDA PALABRA \n");
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 > len2){
        printf("LA PALABRA %s ES MAYOR QUE %s \n", str1, str2);

    }else{
        if(len1 == len2){
            printf("LAS PALABRAS SON IGUALES \n");
        }else{
            if (len1 < len2){
                printf("LA PALABRA %s ES MAYOR QUE %s \n", str2, str1);
            }
        }
    }

    res = strcmp(str1, str2);
    printf(" RESULTADO %d ", res);

    return 0;

    
}