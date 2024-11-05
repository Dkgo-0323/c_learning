#include<iostream>
#include<cassert>
#include"array.h"
using namespace std;

explicit Array::Array(int n): 
    data(new int[n]),size(n)
{}

Array::Array(const Array& arr):
    data(new int[arr.size]),size(arr.size)
{
    for (int i =0; i <size; i++ ){
        data[i] = arr.data[i];
    }
}

Array::~Array() {
    delete[] data;
}

int& Array::atIndex(int index){
    assert(index >= 0 && index < size);
    return data[index];
}

int& Array::operator[] (int index){
    assert(index >=0 && index <size);
    return data[index];
}

const int& Array::operator[]( int index ) const{
    assert(index >=0 && index <size);
    return data[index];
}