#include"complex.h"

Complex AddComplex(Complex a, Complex b){
    Complex z;
    z.re = a.re + b.re;
    z.im = a.im + b.im;
    return z;
}