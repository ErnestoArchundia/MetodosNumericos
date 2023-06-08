#include <stdlib.h>

int main(void){
    int i,n;
    int *buffer, *p_buffer;

    printf("INGRESA LA LONGITUD DEL ARREGLO");
    scanf("%d", &n);

    buffer = (int*) malloc((n)*sizeof(int));
    if(buffer==NULL) exit(1);

    p_buffer = buffer;
    for(i=0; i<n; i++){
        printf("INGRESA EL VALOR %d \n", i);
        scanf("%d", p_buffer++);
    }
    p_buffer = buffer;
    printf("\nLOS VALORES SON \n");
    for(n=0; n<i; n++){
        printf("ARREGLO[%d] = %d \n", n, *p_buffer++);
    }
    free (buffer);

}