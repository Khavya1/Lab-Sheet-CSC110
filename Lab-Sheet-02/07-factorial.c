#include<stdio.h>

int main(){

	int a,b=1,c;

	printf("Enter a number to find the factorial:");
	scanf("%d",&a);

	if(a<0){
		printf("The factorial is not valid");
	}
	else{
		for(c=1;c<=a;++c)
			b *=c;
	}
	printf("%d it the factorial value.",b);
}
