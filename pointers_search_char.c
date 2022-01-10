#include <stdio.h>

char* contains(char* array, int c) {

	int i = 0;

	while (array[i] != '\0') {

		if (array[i] == c) {
			return array + i;
		}
		i++;
	}

	if (c == '\0') {
		return array + i;
	}

	return NULL;
}

int main() {

	char str[] = "aaaabbbbccccaaaaadddbbbdddeee";
	char *p;

	p = str;
	while((p = contains(p, 'b'))!= NULL){
		printf("Found at %d\n", p - str); //ariumhtikh deiktwn
		p++;
}

	contains(str, 'b');

	return 0;
}