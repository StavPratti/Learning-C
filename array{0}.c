#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[5][6];
   //int a[5][6] = {0};


   for(int i=0; i < 5; i++){
    for(int j=0; j < 6; j++){
        a[i][j]=0; //in the 2nd way this is omitted
        printf("%d ", a[i][j]);
    }
   }

   return 0;
}
