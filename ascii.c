#include <stdio.h>

int main() {
	char c = 'a';

	printf("letter %c is represented as %d in ASCII code\n", c, c);
	printf("letter %c is represented as %d in ASCII code\n", c + 10, c + 10);
	printf("letter %c is represented as %d in ASCII code\n", c + 25, c + 25);

	char C = 'A';

	printf("letter %C is represented as %d in ASCII code\n", C, C);
	printf("letter %C is represented as %d in ASCII code\n", C + 10, C + 10);
	printf("letter %C is represented as %d in ASCII code\n", C + 25, C + 25);


	return 0;
}