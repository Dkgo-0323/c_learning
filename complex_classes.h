#ifndef COMPLEX_CLASSES_H
#define COMPLEX_CLASSES_H

#include<iostream>

class Complex {
    
    double abs,arg;
    static  int initCounter;
    friend std::ostream& operator<< (std::ostream& os, const Complex& x);

public:
    void init(double a = 1, double b = 1); // 对复数进行初始化
    Complex& Multiply(const Complex& c); // 复数相乘
    void print() const; // 打印复数
    double getReal() const; // 获取实数部分
    static const double PI; // 定义常数PI
    double getIM() const;
    Complex operator+(const Complex& x) const; // operator overloading...
    explicit operator bool() const;
};


#endif