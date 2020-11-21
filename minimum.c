#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, c;
	
	printf("Give 3 integers:\n");
	if (scanf_s("%d%d%d", &a, &b, &c) != 3) {
		printf("Wrong input!");
		exit(1);
	}

	int min;

	min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}

	printf("Minimum is %d\n", min);



	return 0;
}