#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i, n;
    char*buffer;

    printf("TECLEA LA LONGITUD DE LA CADENA \n");
    scanf("%d",&i);

    buffer=(char*)malloc((i+1)*sizeof(char));
    if(buffer==NULL)exit(1);

    for(n=0; n<i; n++){
        printf("INGRESA UN DATO \n");
        scanf("%s", &buffer[n]);
    }
    
    printf("Random string: %s\n",buffer);
    free(buffer);
    system("Pause");

}
