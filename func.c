#include <stdio.h>

int main() {
	
	float x, result;

	printf("Give value for x:\n");
	scanf_s("%f", &x);

	result = x * x*x + 2 * x + 3;

	printf("f(%f)=%f\n", x, result);

	int y, z, res;
	printf("Give two values:\n");
	scanf_s("%d%d", &y, &z);

	printf("f(%d,%d)=%d", y, z, y*z*(y*z + 1) + 10);

	return 0;
}