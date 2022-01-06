#include <stdio.h>

int main(){

    int a[]={1, 2, 3, 4, 5, 6};
	int *ptr
	
	printf("%d\n", a[2]);
	
	ptr = a + 1; //a[1]
	ptr ++; //a[2]
	printf("%d", *ptr); //the same result as the previous printf
	
	//a[i] == a+i == * (a+i) == &a[i] == i[a]
	//a=&a[0]
	
	ptr = a + 1
	printf("%d", ptr[1]); // that prints 3 == a[2]
	
	// ptr[1] == * (ptr + 1) == ptr + 1
	
	return 0;
}