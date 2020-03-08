#include<stdio.h>

int main(){
	
	int a[10];
	int i,j,k;

	printf("Enter the marks obtained of 10 subjects:");

	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;++i){
		for(j=0;j<10;++j){
			if(a[j]<a[i]){
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	printf("The top 5 scores are:");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
}

