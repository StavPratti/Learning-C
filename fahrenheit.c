#include <stdio.h>
#include <stdlib.h>

float c2f(float temp) {
	float fahr;

	fahr = (9.0 / 5) * temp + 32;


	return fahr;
	// return (9.0 / 5) * temp + 32;
}






int main() {

	float temp;
	printf("Give celcius:\n");

	if (scanf_s("%f", &temp) != 1) {
		printf("Wrong input!\n");
		exit(1);
	}

	printf("%f\n",c2f(temp));

	return 0;
}