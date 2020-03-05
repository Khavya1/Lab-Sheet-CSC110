#include<stdio.h>

int main(){

	int b;

	b = sum(20);

	printf("The sum is %d",b);
}

int sum(int a){

	int i,sum = 0;

	for(i=1;i<=a;i++){
		sum = sum+i;
	}
	return sum;
}

	
