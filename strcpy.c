#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "C programming";
   char str2[20];

   // copying str1 to str2
   // null character is also copied
   strcpy(str2, str1);
   //strncpy
   
   puts(str2); // C programming

   return 0;
}
