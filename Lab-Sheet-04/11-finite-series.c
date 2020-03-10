#include <stdio.h>
#include <math.h>

float Fact(int x){

    if (x == 0)
        return 1;
    if (x == 1)
        return 1;
    return (x * Fact(x - 1));
}

float sum(int a,int b){

    printf("Sum= \t");

    int x = 1;
    float summed = 1;
    float fact;

    for (x = 1; x <= b; ++x)
    {
        fact = Fact(x);
        summed = summed + (pow(a, x) / fact);

        printf("1+(%d power %d/%f)+",a,x,fact);
    }
    return summed;
}

int main(){

    int n,t;
    float e;

    printf("enter base number: \n");
    scanf("%d", &n);
    printf("enter number of terms: \n");
    scanf("%d",&t);

    e = sum(n,t);
	
    printf("\nis:%f", e);
}  
