#include <stdio.h> 
  
long int factorial(long int n){ 
    int c;
    long r = 1;

    for (c = 1; c <= n; c++){
    r = r * c;
    }
    return r; 
} 
  
int main(){ 
    int num;

    printf("Enter number to find the factorial of:");
    scanf("%d",&num);

    printf("Factorial of %d is %ld",num, factorial(num)); 
} 
