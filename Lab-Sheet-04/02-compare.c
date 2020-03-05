#include<stdio.h>

int main(){
	int a,b,c,greatest;

	printf("Enter three numbers to find the greatest one");
	scanf("%d%d%d",&a,&b,&c);

	greatest = largest(a,b,c);

	printf("The largest number among three is %d",greatest);
}

int largest(int a,int b,int c){

	if(a>b && a>c) {
		return a;
	}

	else if(b>a && b>c){
		return b;
	}

	else{
		return c;
	}
}

