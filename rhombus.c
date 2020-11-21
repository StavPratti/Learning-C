#include <stdio.h>
#include <stdlib.h>

int main() {

		int n;

		printf("Give an odd integer between 0 and 20:\n");
		if (scanf_s("%d", &n) != 1) {
			printf("Wrong input!\n");
			exit(1);

		}

		if (n <= 0 || n >= 20) {
			printf("Wrong input!\n");
			exit(1);

		}

		if (n % 2 == 0) {
			printf("Wrong input!\n");
			exit(1);

		}

		int i, j, stars, spaces;

		for (i = 0; i <= n / 2; i++) {
			stars = 2 * i + 1;
			spaces = (n - stars) / 2;
			for (j = 0; j < spaces; j++) {
				putchar(' ');
			}
			for (j = 0; j < stars; j++) {
				putchar('*');

			}
			printf("\n");
		}

		for (i = n / 2 - 1; i >= 0; i--) {
			stars = 2 * i + 1;
			spaces = (n - stars) / 2;
			for (j = 0; j < spaces; j++) {
				putchar(' ');
			}
			for (j = 0; j < stars; j++) {
				putchar('*');

			}
			printf("\n");

		}

		
			return 0;
}