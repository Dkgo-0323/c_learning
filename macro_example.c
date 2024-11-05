#include<stdio.h>
#define MAX_STR_LEN 20

int main(void){
	char arr[MAX_STR_LEN + 1];
	
	for( char* str = arr; *str != 0; str++ ){
		if ( *str > 'A' && *str < 'Z' ){
			*str = *str - 'A' + 'a';
		}
	}
	
	return 0;
}
