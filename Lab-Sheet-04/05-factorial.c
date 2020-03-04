#include <stdio.h> 
  
long int factorial(long int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    int num;
    printf("Enter number to find the factorial of:");
    scanf("%d",&num);
    printf("Factorial of %d is %ld", 
           num, factorial(num)); 
} 