#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[4][3]= { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
   int b[3][4]= { {10, 11, 12, 13}, {13, 14, 15, 16}, {17, 18, 19, 20}};
   int c[4][4]; // c=a*b
   //multiplies the lines of the first with the columns of second
   //the columns of the first must be equal to the lines of the second =3

   //print a
   printf("a = \n");
   for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
            printf("%5d ", a[i][j]);
     }
     printf("\n");
   }
   printf("\n\n");


   //print b
   printf("b = \n");
   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
             printf("%5d ", a[i][j]);
     }
     printf("\n");
   }
   printf("\n\n");


   // c= a * b
   for (int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        c[i][j]=0;
        for (int k=0; k < 3; k++){
            c[i][j]+= a[i][k]*b[k][j];
        }
    }
   }

   printf("c= \n");
    for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
             printf("%5d ", c[i][j]);
     }
     printf("\n");
   }
    return 0;
}
