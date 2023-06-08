#include <stdio.h>

struct empleados
{
    char nombre[50];
    char sexo[10];
    char sueldo[10];
};
int main(void)
{
    int x;
    printf("INGRESA EL NUMERO DE EMPLEADOS\n");
    scanf("%d", &x);
    struct empleados empleado[x];
    for (int i=0; i<x; i++){
        printf("INGRESE SU NUMBRE\n");
        gets(empleado[i].nombre);
        printf("INGRESE SU SEXO\n");
        gets(empleado[i].sexo);
        printf("INGRESE SU SUELDO\n");
        gets(empleado[i].sueldo);
    }
    printf("\n\n");
    printf("   DATACIC   \n");
    for (int j = 0; j < x; j++)
    {
        printf("%d)\n", j);
        printf("EMPLEADO: %s\n", empleado[j].nombre);
        printf("SEXO: %s\n", empleado[j].sexo);
        printf("SUELDO: %s \n\n", empleado[j].sueldo);
    }
}