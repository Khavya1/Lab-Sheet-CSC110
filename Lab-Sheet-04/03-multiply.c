#include<stdio.h>

int main(){

	int a;
	float b,c;
	
	printf("Enter two numbers first int and second float");
	scanf("%d%f",&a,&b);

	c = mul(a,b);

	printf("%f is the multiplied value");
}

int mul(int a,float b){
	float f;

	f = a*b;

	return f;
}

