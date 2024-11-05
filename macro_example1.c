#include<stdio.h>
#define PRINT_INT(a) print_int((a),#a)

void print_int( int a,char* name );
int main(void){
	int x = 5,y = 3;
	PRINT_INT(x);
	PRINT_INT(y);
	PRINT_INT(x+y);
	print_int(x,"x");
	
	return 0;
}

void print_int( int a,char* name ){
	printf("%s = %d\n",name,a);
}
