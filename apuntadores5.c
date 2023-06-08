#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i, n;
    char*buffer;

    printf("TECLEA LA LONGITUD DE LA CADENA");
    scanf("%d",&i);

    buffer=(char*)malloc((i+1)*sizeof(char));
    if(buffer==NULL)exit(1);

    for(n=0; n<i; n++)
    buffer[n]=rand()%26+'a';
    buffer[i]="\0";
    
    printf("Random string: %s\n",buffer);
    free(buffer);
    system("Pause");

}