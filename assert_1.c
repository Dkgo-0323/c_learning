#include<stdio.h>
#include<assert.h>


int safe_get(int* arr, int size, int i);

int main(void){
int arr1[] = {1,3,5,7,9};
    int t;
    printf("please input here:\n");
    scanf("%d",&t);
    printf("%d",safe_get(arr1, sizeof(arr1)/sizeof(int), t) );
    return 0;
}

int safe_get(int* arr, int size, int i) {
    assert(arr != NULL);
    assert(i>=0 && i<size);
    return arr[i];
}