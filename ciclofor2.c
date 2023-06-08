#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;

    printf("INGRESA UN NUMERO N ");
    scanf("%d", &n);

    for (int i=1; i <=n; i++){
        printf("%d + ", i);
        m = m + i;

    }
    printf(" = %d\n", m);
    
     system("Pause");
    return 0;
}//FIN DEL ARREGLO