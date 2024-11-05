#include <iostream>
#include "complex_classes.h"

using namespace std;


int main(){
    Complex  z;
    z.init(5.0,3.0);
    z.print();
    Complex c;
    c.init();
    c.print();
    Complex d;
    d.init(1.0,2.0);
    z.Multiply(c).Multiply(d);
    z.print();
    cout << z.getReal() << endl;
    Complex x = c+z;
    cout << x << endl;
    x.print();


    return 0;
}