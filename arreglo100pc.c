#include <stdio.h>
#include <stdlib.h>

int main(){
    int vector[100];
    int i;

    while (i<100){
        vector[i] = i*2;
        printf("VECTOR [%d] = %d \n", i, vector[i]);
        i++;
    }
    
    return 0;
}//fin main