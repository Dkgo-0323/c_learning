#include <stdio.h>
#include "complex.h"

int main(void){
    Complex a = {1.0, 2.0};
    Complex b = {1.0, 3.0};
    Complex sum = AddComplex(a,b);
    printf("%lf+i*%lf", sum.re,sum.im);

    return 0;
}