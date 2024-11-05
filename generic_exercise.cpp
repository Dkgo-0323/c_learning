#include <iostream>  // 确保包含必要的头文件

using std::cout;
using std::endl;

// 定义模板函数
template <typename T>
T max(const T& a, const T& b){
    return (a > b ? a : b);
}

int main() {
    int a, b;
    a = 3;
    b = 5;
    double d1 = 3.0, d2 = 3.1;
    cout << max<int>(a, b) << endl; // 调用模板函数
    cout << max<double>(d1,d2) << endl;
    return 0;
}
