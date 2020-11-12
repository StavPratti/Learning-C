#include <stdio.h>

int main() {
	 
	int x, res;

		printf(" Give me one integer:\n");
		res=scanf_s("%d", &x);
		
		if (res != 1) {
			printf("Fail to read integer\n");
			exit(1);
		}

		if (x % 2 == 0) {
			printf("Integer is even\n");


		}
		else 
			printf("Integer is odd\n");

		return 0;

}