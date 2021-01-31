#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void reverse(int a[], int n) {
    int i;
    for(i=0; i < n/2; i++) {
        swap(a, i, n-i-1);
    }

}

int main(){

    int a[]={1, 2, 3, 4, 5};
    reverse(a,5);

    return 0;
}
