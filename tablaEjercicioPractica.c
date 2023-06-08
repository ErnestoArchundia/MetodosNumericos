#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, resp, z;
    printf("              TABLAS DE MULTIPLICAR\n");
   do{
    printf("INGRESA UN NUMERO \n");
    scanf("%d", &x);
    printf("HASTA QUE NUMERO DESEAS QUE MULTIPLIQUE \n");
    scanf("%d", &z);
    for (int i = 1; i <= z; i++){
        y = i * x; 
        printf("%d x %d = %d \n", x, i, y); 
    }
    printf("DESEAS COLOCAR OTRO NUMERO?, \n 0)SI \n 1)NO \n" );
    scanf("%d", &resp);
    printf("                                            \n");
    

   } while (resp == 0); 
    system("Pause");
    return 0;


    
}


