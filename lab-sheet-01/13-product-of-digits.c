#include<stdio.h>

int main(){

	int num,rem,product=1;

	printf("Enter a number:");
	scanf("%d",&num);

	while(num!=0){
		rem = num%10;
		product *= rem;
		num /= 10;
	}
	printf("%d",product);
}

