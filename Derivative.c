#include<stdio.h>
#include<math.h>
#define PI 3.14

typedef double Real;

Real f(Real x);
Real derivative(Real (*fptr)(Real) ,Real x);

int main(void){
    int x = 2;
    Real t = PI;
    printf("%lf\n",derivative(sin,PI));
    printf("%lf\n",derivative(f,x));
    return 0;
}

Real f(Real x){
    return 2*x*x + x + 1; 
}

Real derivative(Real (*fptr)(Real) ,Real x){
    Real h = 1e-6;
    Real diff = fptr(x + h) - fptr(x - h);
    return diff/(2*h);
}