#include <stdio.h>
#include <string.h>
#include <math.h>

double area(double a, double b, double c);

int main(){
    double a, b, c, res;

    printf("INTRODUCE UN VALOR PARA A \n");
    scanf("%f", &a);
    printf("INTRODUCE UN VALOR PARA B \n");
    scanf("%f", &b);
    printf("INTRODUCE UN VALOR PARA C \n");
    scanf("%f", &c);

    res = area(a, b, c);
    printf("EL AREA ES: %f \n", res);
    return 0;
}

double area(double a, double b, double c){
    double q, p; 
    p = (a+b+c)/2;
    q = sqrt(p*(p-a)*(p-b)*(p-c)); 
    return q;
}