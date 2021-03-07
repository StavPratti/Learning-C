#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j) {
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void selectionsort(int a[], int n) {

	int i, j, minindex;

	for (i = 0; i < n-1; i++) {
		minindex = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[minindex]) {
				minindex = j;
			}
		}
		swap(a, i, minindex);
	}


}

int main() {

	int a[] = { 2, 3, 4, -1, 0, 100, 99, 5, 7, 10, 1 };

	selectionsort(a, 11);

	int i;

	for (i = 0; i < 11; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");

	return 0;
}