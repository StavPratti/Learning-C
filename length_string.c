#include <stdio.h>
#include <stdlib.h>

unsigned int mystrlen(const char s[]) {

	// 0 1 2 3 4 5 6 7 8 9 10 11 12
	// h e l l o   w o r l d  ! \0

	int i = 0;

	while (s[i] != '\0'); {
		i++;
	}

	return i;
}

int main() {

	char str[1000];

	printf("Give a word:\n");
	scanf("%s", str);

	printf("Length of given word is %d\n", mystrlen(str));

	return 0;
}