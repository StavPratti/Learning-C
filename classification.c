#include <stdio.h>
#include <stdlib.h>

int main() {
    
	int a, b, c, d;

	printf("Give me 4 integers\n");
	if (scanf_s("%d%d%d%d", &a, &b, &c, &d) != 4) {
		printf("Wrong input");
		exit(1);
	}

	int tmp;

	/* 1st pass*/
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	if (b > c) {
		tmp = b;
		b = c;
		c = tmp;
	}
	if (c > d) {
		tmp = c;
		c = d;
		d = tmp;
	}

    /*2nd pass*/
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	if (b > c) {
		tmp = b;
		b = c;
		c = tmp;
	}

    /*3rd pass*/
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	printf("%d\n%d\n%d\n%d\n", a, b, c, d);

	return 0;
