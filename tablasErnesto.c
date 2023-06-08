#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;

    printf("INGRESA UN NUMERO M");
    scanf("%d", &m);
    printf("INGRESA UN NUMERO N");
    scanf("%d", &n);
    for (int i=1; i <=m; i++){
        for (int j=1; j<=n; j++){
            printf("%d \t", i * j);
        }
        printf("\n");
        
    }
    
     system("Pause");
    return 0;
}//FIN DEL ARREGLO