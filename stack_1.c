#include <stdio.h>
#include <stdlib.h>
#include <limit.h>

#define MAX 100

struct stack{
	int top;
	char S[MAX];
} Stack;

/* ��ʼ��һ��ջ */
void initStack(Stack *stack){
	stack->top = -1;
}

/* ����Ƿ�Ϊ�� */ 
int isEmpty(Stack *stack){
	return (stack->top == -1);
}

/* �ж�ջ�Ƿ�����*/
int isFull(Stack *stack){
	return (stack->top == MAX - 1);
}

/* ��ջ */
 void push(Stack *stack, char s){
 	if ( isFull(stack) ){
 		printf("ջ��������ջʧ�ܡ�\n");
 		return;
	}
	else{
		stack->S[++stack->top] = s;
		printf("��ջ��%s\n",s);
	}
}

// ��ջ
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("ջ�գ��޷���ջ��\n");
        return INT_MIN; // ����һ����ʾ�����ֵ
    }
    return stack->arr[stack->top--];
}

// ��ȡջ��Ԫ��
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("ջ�գ�û��ջ��Ԫ�أ�\n");
        return INT_MIN; // ����һ����ʾ�����ֵ
    }
    return stack->arr[stack->top];
}


int main(){
	/*��ʾջ�Ĳ���*/ 
	
	return 0;
}
