#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter the number to find the sum of series");
    scanf("%d",&a);
    b = sum_ser(a);
    printf("The sum of series is %d",b);
}
int sum_ser(int sum){
    if(sum>=1){
        return sum+sum_ser(sum-1);
    }
    else{
        return 1;
    }
}