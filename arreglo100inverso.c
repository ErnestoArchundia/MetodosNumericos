#include <stdio.h>
#include <stdlib.h>

int main(){
    int vector[100];
    int i;
    int contador = 99; 
    while (i<100){
        vector[i] = contador;
        printf("VECTOR [%d] = %d \n",i, vector[i]);
        i++;
        contador--;
    }
    
    return 0;
}//fin main