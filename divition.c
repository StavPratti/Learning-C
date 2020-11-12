#include <stdio.h>


int main() {

	float x;

	x = 3 / 2;

	printf("3/2 = %f (OOPS!!)\n", x);

	float z;

	z = 3.0 / 2; //or 2.0

	printf("3/2 = %f\n", z);

	return 0;
}