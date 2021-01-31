#include <stdio.h>

int increment_single (int a) {
 a++;
 return a;
}

void increment(int a[], int n){
   for(int i=0; i < n; i++){
    a[i]++;
   }
}

/*void increment(int a[], int n){
   for(int i=0; i < n; i++){
    printf("%d ", ++a[i]);
   }
} */

int main(){
    int a[]= {1, 2, 3};
    int b = 0;

    increment_single(b); // call by value
    increment(a,3); // call by refernce in arrays

    printf("a[] =");
    for(int i=0; i < 3; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("b = %d\n" , b);
    printf ("b = %d\n", increment_single(b));

    return 0;
}
