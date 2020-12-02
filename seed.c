#include <stdio.h>
#include <stdlib.h>

int main() {

	int seed;
	printf("Give seed:\n");
	scanf_s("%d", &seed);
	srand(seed);

	int i;
	for (i = 0; i < 20; i++) {
		printf("%d\n", rand() % 1000);
	}

	return 0;

}