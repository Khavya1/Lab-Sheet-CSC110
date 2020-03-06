#include<stdio.h>

float mul(int,float);

int main(){

	int a;
	float b,c;
	
	printf("Enter two numbers first int and second float");
	scanf("%d%f",&a,&b);

	c = mul(a,b);

	printf("%f is the multiplied value",c);
}

float mul(int a,float b){
	float f;

	f = (float)a*b;

	return f;
}

