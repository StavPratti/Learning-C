#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int binary_search(int a[], int n, int item);

int main() {
    unsigned char loop;
    int i, index, item, res, a[SIZE];

    /*
     *  Read 10 integers. Code below includes input checks, you can ignore
     *  them for now and just assume that the input is properly provided, i.e.:
     *
     *  for (i = 0; i < SIZE; i ++) {
     *       printf("a[%d] = ", i);
     *       scanf("%d", &a[i]);
     *  }
     */
    printf("Please provide %d integers in increasing order:\n", SIZE);
    for (i = 0; i < SIZE; i ++) {
        do {
            loop = 0;
            printf("a[%d] = ", i);
            if ((res = scanf("%d", &a[i])) == EOF) {
                exit(1);
            }
            if (res != 1) {
                printf("Error reading integer, please type number again\n");
                scanf("%*[^\n]");
                loop = 1;
            }
            if (i > 0 && a[i] < a[i-1]) {
                printf("Values must be in increasing order, please type number again\n");
                loop = 1;
            }
        } while (loop);
    }

    printf("Search for: ");
    do {
        res = scanf("%d", &item);
        if (res != 1) {
            printf("Error reading integer, please type number again");
        }
    } while (res != 1);

    index = binary_search(a, SIZE, item);

    if (index < 0) {
        printf("Item not found\n");
    } else {
        printf("Item found at position %d\n", index);
    }

    return 0;
}

/*  Binary search algorithm  */
int binary_search(int a[], int n, int t) {
    int l, r, m;

    l = 0;
    r = n - 1;

    while (l <= r) {
        m = (l + r) / 2;

        if (t < a[m]) {
            r = m - 1;
        } else if (t > a[m]) {
            l = m + 1;
        } else {
            return m;
        }
    }
    return -1;
}
