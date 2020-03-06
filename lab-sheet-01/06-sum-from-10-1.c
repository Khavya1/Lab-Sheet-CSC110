#include<stdio.h>

int main (){

	int a=10,b;

	while(a>=1){
		
		printf("%d\n",a);
		a--;
		b +=a;
	}
	printf("%d:\n",b+10);
}

