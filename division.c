#include <stdio.h>

int main(){
    double a = 5;
    double b = 2;
    double c = 1;
    double d = 4;
    double z;

    z= (a+(b/(c/(c+(b/(b-(c/d)))))));
    printf("RESULTADO = %f \n", z);

    return 0;
}