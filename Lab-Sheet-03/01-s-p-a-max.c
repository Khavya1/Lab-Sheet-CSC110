#include<stdio.h>

int main(){

	int a[10],b;
	int sum=0,pro=1;
	int max = a[0];

	printf("Enter Numbers inside array");

	for(b=0;b<10;b++){
		scanf("%d",&a[b]);
	}
	for(b=0;b<10;b++){
		sum = sum+a[b];
		pro = pro*a[b];
		if(max<a[b]){
			max = a[b];
		}
	}
	printf("The maximum is %d,sum is %d,product is %d,average is %d",max,sum,pro,(sum/10));
}

		
