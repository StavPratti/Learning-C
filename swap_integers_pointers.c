#include <stdio.h>
#include <stdlib.h>

//antimetauesh akeraiwn me pointers
//den ginetai xwris pointers

void swap(int* n1, int* n2) {
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main() {

	int i1 = 5;
	int i2 = 10;

	swap(&i1, &i2);

	printf("i1 = %d, i2 = %d\n", i1, i2);

	return 0;
}