#include <stdio.h>

void f(int *a){
  
    (*a)++;
}

int main(){
 
    int x = 10;
	
	f(&x);
	
	printf("%d\n", x);
	
	return 0;
}