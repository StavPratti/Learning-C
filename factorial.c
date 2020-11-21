#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	long fac;
	fac = 1; 
	printf("0!=%ld\n", fac);
	for (i = 1; i <= 10; i++) {
		fac = fac * i;
		printf("%d!=%ld\n", i, fac);

    } 


	/*int i=0;
	long fac=1;

	if (i == 0) {
		printf("%d!=%ld\n", i, fac);
	}
	 
		for (i = 1; i <= 12; i++) {

			fac = fac * i;
			printf("%d!=%ld\n", i, fac);
		}*/
	
	return 0;
}