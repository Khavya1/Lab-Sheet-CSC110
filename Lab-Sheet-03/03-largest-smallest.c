// somethings wrong :(
#include<stdio.h>

int main(){
	
	int a[10];
	int b,max = a[0],min = a[0];

	printf("Enter 10 numbers to find maximum and minimum nummber among them");
	for(b=0;b<10;b++){
		scanf("%d",&a[b]);
	}
	for(b=0;b<10;b++){
		if(max<a[b]){
			max = a[b];
		}
		if(min>a[b]){
			min = a[b];
		}
	}
	printf("The maximum number is %d,and minimum nunmber is %d.",max,min);
}


		
