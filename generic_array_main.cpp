#include<iostream>
#include"generic_array.h"


using std::cout;
using std::endl;
using std::cin;

int main(){
    Array<int> a_int(10);
    for(int i =0; i<a_int.getSize(); ++i){
        cin >> a_int[i];
    }
    a_int.array_print();
    Array<double> a_double(5);
    for(int i =0; i<a_double.getSize(); ++i){
        cin >> a_double[i];
    }
    a_double.array_print();

    return 0;
}