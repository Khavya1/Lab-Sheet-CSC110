#include <string.h>
#include <stdio.h>

int main(){

   char string[1000];
   
   printf("Input a string to convert to lowercase case\n");
   fgets(string,1000,stdin);
   
   printf("The string in lower case: %s\n", strlwr(string));
}

