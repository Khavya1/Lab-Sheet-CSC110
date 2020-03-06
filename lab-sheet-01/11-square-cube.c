#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter a number:");
	scanf("%d",&a);

	if(a%2==0){
		printf("The cube of %d is %d:",a,(a*a*a));
	}
	else{
		printf("The square of %d is %d:",a,(a*a));
	}
}

