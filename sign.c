#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, res;


	printf("provide an integer number:\n");
	res = scanf_s("%d", &x);
	
	if (res != 1) {
		printf("Failed to read integer\n");
		exit(1);

	}

	if (x < 0) {
		printf("number given is negative!\n");

	}
	else {
		if (x == 0) {
			printf("number given is zero!\n");

		}
		else {
			printf("number given is positive!\n");

		} // i am not obliged to use {} in the last else

	}

	return 1;
}