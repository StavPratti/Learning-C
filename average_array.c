#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float average(int array[], int m) {
	float sum = 0;
	
	int i = 0;

	for (i = 0; i < m; i++) {
		sum += array[i];
    
	}
	return sum / m;
}


int main() {

	srand(time(NULL));

	int array[1000];
	
	int i; 

	for (i = 0; i < 1000; i++) {
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}
	 
	printf("\n");
	printf("%f\n", average(array, 1000));


	return 0;
}