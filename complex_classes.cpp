#include <iostream>
#include <cmath>
#include "complex_classes.h"

using std::cin;
using std::cout;
using std::endl;

int Complex::initCounter;
const double Complex::PI = 3.1415926;

void Complex::init(double a, double b){
        this ->abs = sqrt(a*a + b*b);
        this ->arg = atan(b/a);
        initCounter ++;
    }

Complex& Complex::Multiply(const Complex& c){
    abs = abs *c.abs;
    arg = arg +c.arg;
    return *this;
}

void Complex::print() const{
    cout << abs * cos(arg) << "+ i*" << abs * sin(arg) << endl;
}

double Complex::getReal() const{
    return abs*cos(arg);
}

double Complex::getIM() const{
    return abs*sin(arg);
}

Complex Complex::operator+( const Complex& x ) const{
    Complex result;
    double newRe = this->getReal() + x.getReal();
    double newIm = this->getIM() + x.getIM();
    result.init(newRe,newRe);
    return result;
}

std::ostream& operator<<(std::ostream& os, const Complex& x){
    os << x.abs * cos(x.arg) << "+ i*" << x.abs * sin(x.arg) << endl;
    return os;
}