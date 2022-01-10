#include <stdio.h>
#include <stdlib.h>

//o sizeof einai enas telesths poy deixnei poses ueseis mnhmnhs pianei mia metavlhth

void get_array(int a[], int n) {

	printf("In get_array sizeof(a) = %d\n", sizeof(a));
	printf("In get_array address of a is %p\n", a);
}

int main() {

	int i;
	int a[10];

	printf("sizeof(i) = %d\n", sizeof(i));

	printf("In main sizeof(a) = %d\n", sizeof(a));
	//typwnei olh th mnhmh poy katalamvanei o pinakas

	printf("In main address of a is %p\n", a);

	get_array(a, 10);

	return 0;
}
