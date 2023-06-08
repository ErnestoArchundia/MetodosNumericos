//apuntadores 1
int main(){
    int x=17 ,y;
    int * p;
    p = &x;

    printf("EL VALOR DE X ES %p \n", *p);
    y=*p+3;
    printf("EL VALOR DE Y ES %d", y);
    return 0;
}