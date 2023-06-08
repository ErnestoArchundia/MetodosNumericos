#include <stdio.h>

struct fraccion{
    int den;
    int num;
};

int main(void){
    struct fraccion frac1;
    struct fraccion frac2;
    frac1.den = 3;
    frac1.num = 4;
    frac2.den = 6;
    frac2.num = 2;
    multiplicacion(frac1, frac2);
    suma(frac1, frac2);
    resta(frac1, frac2);
    division(frac1, frac2);
}

int multiplicacion(struct fraccion mul1, struct fraccion mul2){
    int den = mul1.den*mul2.den;
    int nom = mul1.num*mul2.num;
    printf("MULTIPLICACION\n");
    printf("%d / %d \n\n", den, nom);
    return 0;
}

int suma(struct fraccion sum1, struct fraccion sum2){
    int den = (sum1.den * sum2.num)+(sum1.num * sum2.den);
    int num = sum1.num * sum2.num;
    printf("SUMA\n");
    printf("%d / %d \n\n", den, num);
    return 0;
}

int resta(struct fraccion sum1, struct fraccion sum2){
    int den = (sum1.num * sum2.den)-(sum1.den * sum2.num);
    int num = sum1.num * sum2.num;
    printf("RESTA\n");
    printf("%d / %d \n\n", den, num);
    return 0;
}

int division(struct fraccion sum1, struct fraccion sum2){
    int den = sum1.den * sum2.num;
    int num = sum1.num * sum2.den;
    printf("DIVISION\n");
    printf("%d / %d \n\n", den, num);
    return 0;
}

