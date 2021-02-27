#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {

	srand(time(NULL));

	int a[1000]; //not necessary with an array

	int counters[100] = { 0 };

	int i, result;

	for (i = 0; i < 1000; i++) {
		result = (a[i] = rand() % 100);
		//printf("%d ", result);
		counters[result] += 1;
	}

	printf("Element\t\tValue\n");
	for (i = 0; i < 100; i++) {
		printf("%d\t\t%d\n", i, counters[i]);

	}

	return 0;
}