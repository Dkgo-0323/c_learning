#include<iostream>
using namespace std;

int factorial(int n){
    if( n <= 0 ){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    cout << "Hello,world!" << endl;
    cout << "5! = " << factorial(5) << endl;

    return 0;
}