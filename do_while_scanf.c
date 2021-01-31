/*
 * The following is a very simple example of how to use scanf to ask for input
 * multiple times (until it is provided correctly).
 *
 * Other important functions to keep in mind for user-provided I/O:
 *
 * fgets(), getline()
 *
 * Another comment regarding scanf: Many times it is safer and less error-prone
 * to read user input as a string and then convert to the desired datatype. To
 * do these kinds of operations, please check <string.h> and
 *
 * strlen(), strtok(), atoi(), atof(), strtof(), strtod().
 *
 */


#include <stdio.h>

int main() {
    int n, res;
    printf("Give number:\n");
    do {
        res = scanf("%d", &n);
        if (res != 1) {
            printf("Error reading number, try again:\n");
            /*  This is used to read all characters from the buffer so that
             *  scanf() does not fall into an infinite loop. */
            while (getchar() != '\n') {
                continue;
            }
            continue;
        } else {
            break;
        }
    } while (1);
    printf("Number: %d\n", n);
    return 0;
}
