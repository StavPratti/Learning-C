#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;

	printf("Give an integer between 0 and 20:\n");
	if (scanf_s("%d", &n) != 1) {
		printf("Wrong input!\n");
		exit(1);

	}

	if (n <= 0 || n >= 20) {
		printf("Wrong input!\n");
		exit(1);
	}

    int i, j;
	/*for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			putchar('*');

		}
		printf("\n");
	}
	

	return 0; 
} */
  for(i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (j == 1 || i == n || i == j) {
				putchar('*');
			}
			else putchar(' ');

		} printf("\n");
  }
  return 0;
  }
  