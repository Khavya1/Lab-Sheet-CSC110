#include<stdio.h>
int main () {
	int a,b;
	for(a=1;a<=5;a++){
		for(b=6;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
}
