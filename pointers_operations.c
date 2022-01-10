#include <stdio.h>

void do_operations(double x, double y, double *sum, double *diff, double *prod ) {

	//void fun because of pointers
	*sum = x + y;
	*diff = x - y;
	*prod = x * y;
}

int main() {

	double x1 = 10.5, x2 = 2.3, sum, diff, prod;

	do_operations(x1, x2, &sum, &diff, &prod);

	printf("sum = %f\ndiff = %f\nprod = %f\n", sum, diff, prod);
}
