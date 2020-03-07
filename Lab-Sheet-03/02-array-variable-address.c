#include<stdio.h>

int main(){

	int a[10];
	int b,c;

	printf("Enter 10 numbers.");
	for(b=0;b<10;b++){
		scanf("%d",&a[b]);
	}
	for(b=0;b<10;b++){
		printf("%d is the value inside array a[%d] in address %u \n",a[b],b,&a[b]);
	}
}

