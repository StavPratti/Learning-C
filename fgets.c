#include <stdio.h>

int main(){

    char name[30];

    printf("Enter name: ");

    fgets(name, sizeof(name), stdin);  // read string, like scanf, always write stdin
    
    printf("Name: ");
    
    puts(name);    // display string, like printf, cant display in printf with %s

/* This is better since
* a) it can read a whole line, including whitespace, up until(and
* including) the newline character '\n'.
* b) array size information is included as an argumentand there is no risk
* of memory overflow(contrary to scanf will read until the next whitespace
    * character, possibly leading to memory errors).
    *
    * Notice that the fgets approach includes the newline in the string.
    *
    */
     
    
    return 0;
}
