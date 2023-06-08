#include <stdio.h>

struct atletas{
    char deporte[30];
    char nmbre[100];
    char pais[20];
    char medallas[10];
};
int main(void){
    struct atletas atleta1;
    printf("INGRESE SU NUMBRE\n");
    gets(atleta1.nmbre);
    printf("INGRESE SU DICIPLINA \n");
    gets(atleta1.deporte);
    printf("INGRESE SU PAIS DE ORIGEN \n");
    gets(atleta1.pais);
    printf("INGRESE SU NUMERO DE MADALLAS GANADAS \n");
    gets(atleta1.medallas);
    printf("\n\n");
    printf("     OLIMPIADAS TOKIO 2020   \n");
    printf("NOMBRE: %s\n", atleta1.nmbre);
    printf("PAIS DE ORIGEN: %s\n", atleta1.pais);
    printf("DEPORTE: %s \n", atleta1.deporte);
    printf("MEDALLAS GANADAS: %s \n", atleta1.medallas);
    printf("     ------------------");
}