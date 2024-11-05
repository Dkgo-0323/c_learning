#include<stdio.h>
#include<stdlib.h>

#define NDEBUG

int safe_get(int* arr, int size, int i);

int main(void){
    int arr1[] = {1,3,5,7,9};
    int t;
    printf("请输入要get数组的第几号元素:\n");
    scanf("%d",&t);
    printf("%d",safe_get(arr1, sizeof(arr1)/sizeof(int), t) );
    return 0;
}

int safe_get(int* arr, int size, int i) {
    #ifndef NDEBUG
    if (arr == NULL){
        printf("Null array\n");
        exit(1);
    }
    if (i<0 || i>=size){
        printf("Out of bounds\n");
        exit(1);
    }
    #endif
    return arr[i];
}
