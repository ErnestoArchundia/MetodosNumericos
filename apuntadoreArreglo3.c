#include<stdlib.h>

int main(void){
    int i, n;
    int * buffer, * p_buffer;

    printf("INRESA LA LONGITUD DEL ARREGLO");
    scanf("%d", &n);

    buffer = (int*) malloc((n)*sizeof(int));
    if(buffer == NULL) exit(1);

    p_buffer = buffer;
    for ( i=0; i<n; i++){
        printf("INGRESA EL VALOR EN LA POSICION %d ", i);
        scanf("%d", p_buffer++);
    } 

    p_buffer = buffer;
    printf("LOS VALORES SON \n");
    for(n=0; n<i; n++){
        printf("arreglo[%d] = %d \n", n, *p_buffer++);
    }
    free (buffer);
    system("Pause");

}