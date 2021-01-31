#include <stdio.h>

#define SIZE 10

void swap(int a[], int i, int j);

/*  Two alternative (but similar) implementations of bubblesort */
void bubblesort(int a[], int n);

void bubblesort2(int a[], int n);

int main() {
    int i, res, a[SIZE];

    /*  Read 10 integers */
    printf("Please provide %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i ++) {
        do {
            printf("a[%d] = ", i);
            res = scanf("%d", &a[i]);
            if (res != 1) {
                printf("Error reading integer, please type number again");
            }
        } while (res != 1);
    }
    /*  Using bubblesort2() here */
    bubblesort2(a, SIZE);
    printf("a = [ ");
    for (i = 0; i < SIZE; i ++) {
        printf("%d ", a[i]);
    }
    printf("]\n");
    return 0;
}

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

/* Implementation 1: Larger numbers are moved last */
void bubblesort(int a[], int n) {
    int i, j;

    for (i = 1; i < n - 1; i ++) {
        for (j = 0; j < n - i; j ++ ) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
            }
        }
    }
}

/*  Implementation 2: Smaller numbers are moved first */
void bubblesort2(int a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i ++) {
        for (j = n - 1; j > i; j --) {
            if (a[j] < a[j - 1]) {
                swap(a, j, j - 1);
            }
        }
    }
}
