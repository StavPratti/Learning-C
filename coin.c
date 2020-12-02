#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEADS 0
#define TAILS 1

int coin_toss() {
 
	return rand()%2;
}

int main() {

	srand(time(NULL));

	int n;
	printf("Give number of times:\n");
	if (scanf_s("%d", &n) != 1) {
		printf("Wrong input");
		exit(1);
	}

	printf("Throwing coin %d times\n", n);

	int i;
	int heads_count = 0;
	for (i = 0; i < n; i++) {
		if (coin_toss() == HEADS) {
			heads_count++;
		}
		
	}

	printf("Heads: %d\n", heads_count);
	printf("Tails: %d\n", n-heads_count);

	return 0;
}