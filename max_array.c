#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max (int array[], int m) {

	int array_max = array[0];
	int i;

	for (i = 1; i < m; i++) { //zero 0 is already the max
		if (array[i] > array_max) {
			array_max = array[i];
		}
	}

	return array_max;
}

int main() {

	srand(time(NULL));

	int array[1000];
	int i = 0;


	//fill array
	for (i = 0; i < 1000; i++) {
		array[i] = rand() % 1000000;

	}
	//print array
	for (i = 0; i < 1000; i++) {
		printf("%d,", array[i]);
	}

	printf("\n");

	printf("Maximum is %d\n", max(array, 1000));


	return 0;
}
