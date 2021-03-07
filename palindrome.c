#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

	int i;
	char text[101]; // for null character

	i = 0;
	while ( i < 100 && (text[i] = getchar()) != EOF) {
		if (isalnum(text[i])) {
			text[i] = tolower(text[i]);
			i++;
		}
		
	}
	text[i] = '\0';

	printf("%s", text);

	// n = 11
	// 0  1  2  3  4  5  6  7  8  9  10 11 
	// m  a  d  a  m  i  m  a  d  a  m  \0

	int j;
	int palindrome = 1;

	for (j = 0; j < i / 2 ; j++) {
		if (text[j] != text[i - 1 - j]) {
			palindrome = 0;
			break;
		}
	}

	if (palindrome) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}