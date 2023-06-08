#include <stdio.h>
#include <stdlib.h>
    int*p, y;
    void func(){
        int x=40;
        p=&x;
        y=*p;
        *p=23;
    }

    int main(void){
        func();
        y=*p;
        *p=25;
        printf("EL VALOR DE Y ES %d \n EL VALOR DE *P ES %d \n EL VALOR DE P ES %p",y,*p,p);
    }
