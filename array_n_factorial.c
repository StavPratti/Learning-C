#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long factorial[15];

    factorial[0]=1;
    for (i=1; i<15; i++){
        factorial[i]= factorial[i-1] * i;

        }
    for(i=14; i>=0; i--){
        printf("%d!% = %ld\n", i,factorial[i]);
    }

    return 0;
}
