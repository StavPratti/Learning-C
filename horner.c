#include <stdio.h>
#include <stdlib.h>

#define MAXDEGREE 10

int main() {

	int degree;
	int a[MAXDEGREE + 1];

	scanf("%d", &degree);

	int i;

	for (i = 0; i <= degree; i++) {
		scanf("%d", &a[i]);
	}

	/*printf("\n");

    for (i = degree; i >= 0; i--) {
		printf("%d x^%d", a[i], i);
		if (i > 0) {
			printf("+");
		}
	}
	printf("\n"); */

	int x;
	scanf("%d", &x);

	int t = a[degree];

	for (i = degree-1; i >= 0; i--) {
		t *= x;
		t += a[i];
	}
	printf("p(%d)=%d\n", x, t);

	return 0;
}