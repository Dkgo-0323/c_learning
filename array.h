#ifndef ARRAY_H_
#define ARRAY_H_

class Array{
    int* data;
    int size;

public:
    explicit Array(int size);
    Array(const Array& a);
    ~Array();
    int& atIndex(int index);
    int& operator[] ( int index );
    const int& operator[]( int index ) const;
};




#endif