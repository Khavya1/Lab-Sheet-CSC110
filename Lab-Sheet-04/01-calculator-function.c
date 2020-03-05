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
	int a,b,summ,subb,divv,mull;

	printf("Enter two numbers to add,subtract,multiply,divide");
	scanf("%d %d",&a,&b);

	summ = add(a,b);
	subb = sub(a,b);
	mull = mul(a,b);
	divv = div(a,b);

	printf("The sum is %d \n The sub is %d \n The div is %d \n The mul is %d",summ,subb,divv,mull);
}

