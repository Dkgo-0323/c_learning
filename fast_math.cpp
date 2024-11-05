#include "fast_math.h"
#include<cmath>

namespace fast_math{
    double squre(double x){
        return x*x;
    }
}

double fast_math::norm (double x,double y){
    return sqrt(x*x + y*y);
}