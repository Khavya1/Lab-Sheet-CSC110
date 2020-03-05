// compiling doenst work properly without linking math library so 
// use the following syntax only for gcc users
// gcc -o file_name file_name.c -lm
#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;

	printf("Enter two numbers first being base and second being power");
	scanf("%d%d",&a,&b);

	c = p(a,b);

	printf("The value is %d",c);
}

int p(int a,int b){

	int po;

	po = pow(a,b);

	return po;
}

