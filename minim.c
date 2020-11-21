#include <stdio.h>
#include <stdlib.h>

int min2(int a, int b) {

	/*int min;
	min = a;
	if (b < min) {
		min = b;
	}
	return min; */

	return a<=b?a:b;
    
	/*if (a <= b) {
		return a;
	}
	else {
		return b;
	}*/
}

int min3(int a, int b, int c) {
	int min;

	min = min2(a, b);
	min = min2(min, c);
	return min;
    //return min2(min2(a,b),c);
}

int min4(int a, int b, int c, int d) {
	int min;
	min = min3(a, b, c);
	min = min2(min, d);
	return min;
}

int min5(int a, int b, int c, int d, int e) {
	return min3(min3(a, b, c), d, e);
}

int main() {

	int a, b, c, d, e;
	printf("Give 5 integers:\n");
		if(scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e) != 5) {
			printf("Wrong input!\n");
			exit(1);
	}
		printf("Minimum is %d\n", min5(a, b, c, d, e));

	return 0;
}