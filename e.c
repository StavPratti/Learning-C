#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	printf("Give an integer between 1 and 10:\n");
	if (scanf_s("%d", &n) != 1) {
		printf("Wrong input!\n");
		exit(1);
	}
	if (n < 1 || n>10) {
		printf("Wrong input!\n");
		exit(1);
	}

	long fac, i;
	fac = 1;
	double e = 0;

	for (i = 0; i < n; i++) {
		if (i > 0) {
			fac = fac * i;
		}
		//printf("%d!=%ld\n", i, fac);

		e += 1.0 / fac;

		printf("With %3d terms e = %.20lf\n", i + 1, e);
	}
	

	return 0;
}