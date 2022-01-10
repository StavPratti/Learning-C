#include <stdio.h>

void minmax(int a[], int n, int *min, int *max) {

    int i;
    int cur_min, cur_max;

    cur_min = a[0];
    cur_max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < cur_min) {
            cur_min = a[i];
        }
        if (a[i] > cur_max) {
            cur_max = a[i];
        }
    }

    if (min != NULL) {
        *min = cur_min;
    }
    if (max != NULL) {
        *max = cur_max;
    }
}

int main() {

    int a[10];
    int i, min, max;

    for (i = 0; i < 10; i++) {
        scanf_s("%d", &a[i]);
    }

    minmax(a, 10, &min, &max);

    printf("min = %d\n", min);
    printf("max = %d\n", max);

    return 0;
}