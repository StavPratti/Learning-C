#include <stdio.h>
#include <stdlib.h>

void print_address(int n) {

	printf("In function address of n is %p\n", &n);
}

int main() {

	int n = 0;

	printf("In main address of n is %p\n", &n);
	print_address(n);

	return 0;
}
