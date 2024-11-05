#include <stdio.h>
#include <stdlib.h>
#include <limit.h>

#define MAX 100

struct stack{
	int top;
	char S[MAX];
} Stack;

/* 初始化一个栈 */
void initStack(Stack *stack){
	stack->top = -1;
}

/* 检查是否为空 */ 
int isEmpty(Stack *stack){
	return (stack->top == -1);
}

/* 判断栈是否已满*/
int isFull(Stack *stack){
	return (stack->top == MAX - 1);
}

/* 入栈 */
 void push(Stack *stack, char s){
 	if ( isFull(stack) ){
 		printf("栈已满，入栈失败。\n");
 		return;
	}
	else{
		stack->S[++stack->top] = s;
		printf("入栈：%s\n",s);
	}
}

// 出栈
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("栈空，无法出栈！\n");
        return INT_MIN; // 返回一个表示错误的值
    }
    return stack->arr[stack->top--];
}

// 获取栈顶元素
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("栈空，没有栈顶元素！\n");
        return INT_MIN; // 返回一个表示错误的值
    }
    return stack->arr[stack->top];
}


int main(){
	/*演示栈的操作*/ 
	
	return 0;
}
