#include <stdio.h>

int main(){
    int w = 9;
    int x = 3;
    int y = 7;
    int z = -2;

    printf(" 1) x < y AND w > z = %d \n", x<y && w>z);
    printf(" 2) x >= w XOR z == y = %d \n", x>=w ^ z==y);
    printf(" 3) y <= x OR x!=w = %d \n", y<=x ^ x!=w);
    printf(" 4) w == 9 XOR x == 3 = %d \n", w==9 ^ x ==3);
    printf(" 5) y > z AND z < x = %d \n", y>z && z<x);
    printf(" 6) NOT w != 9 = %d \n", -w != 9);

    return 0;
}
