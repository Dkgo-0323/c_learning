#include<stdio.h>
int main(void){
    int x = 5;
    const int *ptr = &x;
    printf("��ַ��%p\n",ptr);
    ptr ++;
    x = 10;
    printf("��ַ��%p\n",ptr);
    *ptr = 5;

    return 0;
}
