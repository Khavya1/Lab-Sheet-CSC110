#include <string.h>
#include <stdio.h>

int main(){

   char string[1000];
   
   printf("Input a string to convert to upper case\n");
   fgets(string,1000,stdin);
   
   printf("The string in upper case: %s\n", strupr(string));
}

