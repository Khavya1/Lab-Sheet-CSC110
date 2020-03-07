#include<stdio.h>

int main(){

	int a[10];
	int i,j,k;

	printf("Enter the value for array:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;++i){
		for(j=i+1;j<10;++j){
			if(a[i]>a[j]){
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	printf("The numbers arranged in ascending order are given below \n");
	for(i=0;i<10;++i){
		printf("%d\n",a[i]);
	}
}

