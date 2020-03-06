#include<stdio.h>

int add(int a,int b){
	return a+b;
} 

int sub(int a,int b){
	return a-b;
}

int div(int a,int b){
	return a/b;
}

int mul(int a,int b){
	return a*b;
}

int main(){
	int a,b,sum,diff,pro,frac;

	printf("Enter two numbers to add,subtract,multiply,divide");
	scanf("%d %d",&a,&b);

	sum = add(a,b);
	diff = sub(a,b);
	pro = mul(a,b);
	frac = div(a,b);

	printf("The sum is %d \n The sub is %d \n The div is %d \n The mul is %d",sum,diff,frac,pro);
}

