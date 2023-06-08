#include <stdio.h>

struct CD{
    char titulo[100];
    char artista[50];
    char ano[10];
    char precio[10];
    char num[10];
};
int main(void){
    struct CD cd1;
    printf("INGRESA EL TITULO\n");
    gets(cd1.titulo);
    printf("INGRESA EL ARTISTA\n");
    gets(cd1.artista);
    printf("INGRESA EL NUMERO DE CANCIONES\n");
    gets(cd1.num);
    printf("INGRESA EL AÑO\n");
    gets(cd1.ano);
    printf("INGRESA EL PRECIO\n");
    gets(cd1.precio);
    printf("\n\n");
    printf("---DISCO %s\n", cd1.titulo);
    printf("ARTISTA: %s\n", cd1.artista);
    printf("%s CANCIONES\n", cd1.num);
    printf("%s \n", cd1.ano);
    printf("COSTO: %s MXN", cd1.precio);
}