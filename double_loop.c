#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;

	do {
		printf("Give a positive integer:\n");
		if (scanf_s("%d", &n) != 1) {
			printf("Wrong input!\n");
			exit(1);
		}

	} while(n<=0);

	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}



	return 0;
}
