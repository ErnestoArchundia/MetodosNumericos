int i[10], x;
float f[10];


int main(void){
    printf("\t\tENTERO\t\tFLOTANTE\n\n");
    for(x=0; x<10; x++){
        printf("ELEMENTO %d:\t%d\t\t%d\n", x, &i[x], &f[x]);
    }
}