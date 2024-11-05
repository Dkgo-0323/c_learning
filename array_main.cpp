#include<iostream>
#include"array.h"

using namespace std;

int main(void){
    Array a(5); 
    /*这行代码定义并初始化了一个名为 a 的 Array 对象。
    这个对象的生命周期持续到包含它的作用域结束为止（例如，到达函数末尾或块作用域末尾）。*/

    a.atIndex(3) = 2;
    cout << a.atIndex(3) << endl;
    Array* ptr = new Array(10);
    ptr[0] = a;
    delete ptr;
    
    Array(20);
    /*这行代码创建了一个临时的 Array 对象。这个对象在创建之后会立即被销毁，
    因为没有任何变量名持有它。这通常用于一些临时的计算或者函数调用中的参数传递。*/

    return 0;
}