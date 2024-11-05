#include<stdio.h>
#include<math.h>


enum DisplayMode {
		SILENT, NORMAL, VERBOSE
	};
enum ErrorFlag {
		SUCCESS, FAILURE
	};
enum ErrorFlag find_optimum(double a, double b, double c, double* x, enum DisplayMode mode);

int main(void){
	 
	double x0;
	if (find_optimum(1.0,-3.0,4.0,&x0,SILENT) == SUCCESS)
		printf("optimum at: %lf\n",x0);
	
	return 0;
}

enum ErrorFlag find_optimum(double a, double b, double c, double* x, enum DisplayMode mode){
	if ( fabs(a) < 1e-8 ){
		switch(mode) {
			case VERBOSE:
				printf("Error: no optimum point in %lf*x^2 + %lf*x + %lf\n",a,b,c);
				break;
			case NORMAL:
				printf("Error: no optimum point");
				break;
			default:
				break;
		}
		return FAILURE;
	}
	*x = -b/(2*a);
	return SUCCESS;
}
