#include<stdio.h>
#include<stdlib.h>

void swap(void*p, void*q, size_t nbytes);

int main(void){
    int a,b;
    double c,d;
    a = 3;
    b = 5;
    c = 2.1;
    d = 3.5;
    swap(&a,&b,sizeof(int));
    swap(&c,&d,sizeof(double));
    printf("%d,%lf",a,c);

    return 0;
}

void swap(void*p, void*q, size_t nbytes){
    for(int i =0; i<nbytes; i++){
        char temp = ((char*)p)[i];
        ((char*)p)[i] = ((char*)q)[i];
        ((char*)q)[i] = temp;
    }

}
