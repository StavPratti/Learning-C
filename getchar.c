#include <stdio.h>
	
int main() {

	int c; // if use getchar() always int

	while ((c = getchar()) != EOF) { // && c != '\n'
		if (c >= 'a' && c <= 'z') {
			c -= 'a' - 'A';

		}
		else if (c >= 'A' && c <= 'Z') {
			c += 'a' - 'A';
		}
		putchar(c);

	}

	return 0;
}
