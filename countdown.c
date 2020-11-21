#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	printf("Give a positive integer:\n");
	if (scanf_s("%d", &n) != 1) {
		printf("Wrong input!");
		exit(1);
	}

	if (n <= 0) {
		printf("Wrong input!");
		exit(1);
	}

	while(n>=0) {
		printf("%d\n", n);
		n--;
    }


	return 0;
}