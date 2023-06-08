#include <stdio.h>

struct empleados{
    char nmbre[100];
    char sexo[10];
    char sueldo[10];
};
int main(void){
    struct empleados empleado1;
    printf("INGRESE SU NUMBRE\n");
    gets(empleado1.nmbre);
    printf("INGRESE SU SEXO\n");
    gets(empleado1.sexo);
    printf("INGRESE SU SUELDO\n");
    gets(empleado1.sueldo);
    printf("\n\n");
    printf("   DATACIC   \n");
    printf("EMPLEADO: %s\n", empleado1.nmbre);
    printf("SEXO: %s\n", empleado1.sexo);
    printf("SUELDO: %s \n", empleado1.sueldo);
    printf("--------------");
}