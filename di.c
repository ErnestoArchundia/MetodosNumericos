#include <stdio.h>

int main(){
    double a = 5;
    double c = 1;
    double e = 3;
    double f = 30;
    double g = 23;
    double y;

    y = (c/e)+(e/a)+(c/f)/(g/f);
    printf("RESULTADO %f \n", y);

    return 0;
}