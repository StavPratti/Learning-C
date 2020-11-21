#include <stdio.h>
#include <stdlib.h>


long power(long x, long n) {

	if (x == 0) {
		if (n == 0) {
			return 1;
	  }
		return 0;
	}
     
	long result = 1;
	int i;
	for (i = 0; i < n; i++) {
		result = result * x;
	}
	return result;
}




int main() {

	 long i, j;
	
		 for (i = 0; i < 6; i++) {
		     for (j = 0; j < 8; j++) {
			 printf("%6ld ", power(i, j));
			
		}
		 printf("\n");
		
	}
	 return 0;
	
}