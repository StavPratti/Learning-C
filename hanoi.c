#include <stdio.h>
#include <stdlib.h>

void hanoi(int N, int start, int target, int temp) {

	if (N == 1) {
		printf("%d -> %d\n", start, target);
		return;
	}

	hanoi(N-1, start, temp, target);
	hanoi(1, start, target, temp); //temp isnt used
	hanoi(N - 1, temp, target, start);

}

int main() {

	hanoi(4, 1, 3, 2);

	return 0;
}