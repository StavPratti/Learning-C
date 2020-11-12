/* example: compute sum */
#include <stdio.h>


int main() {
	
	int x, y, sum;

	printf("Give two numbers:\n");

	scanf_s("%d%d", &x, &y);
	sum = x + y;
	printf("Sum of %d and %d is %d\n", x, y, sum);

	int X, Y, Z, SUM;

	printf("Give three numbers:\n");

	scanf_s("%d%d%d", &X, &Y, &Z);
	SUM = X + Y + Z;
	printf("Sum of %d and %d and %d is %d\n", X, Y, Z, SUM);

	return 0;
}