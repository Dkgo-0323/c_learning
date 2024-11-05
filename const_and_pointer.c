#include<stdio.h>
int main(void){
    int x = 5;
    const int *ptr = &x;
    printf("地址是%p\n",ptr);
    ptr ++;
    x = 10;
    printf("地址是%p\n",ptr);
    *ptr = 5;

    return 0;
}
