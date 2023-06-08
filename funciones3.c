#include <stdio.h>
#include <string.h>

int maximo(int a, int b);
int main(){
    int a, b, res;

    printf("INTRODUCE UN VALOR \n");
    scanf("%d", &a);
    printf("INTRODUCE UN SEGUNDO VALOR \n");
    scanf("%d", &b);
    res = maximo(a, b);
    printf("EL NUMERO MAYOR ES: %d \n", res);
    return 0;
}
int maximo(int a, int b){
    if(a>b){
        return a;
    }else{
        if(b>a){
            return b;
        }
    }
}