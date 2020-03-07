#include<stdio.h>

int main(){

	int a[5];
	int i,j,k;

	printf("Enter marks obtained(Practical+Theory) in 5 subjects:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;++i){
		for(j=i+1;j<5;++j){
			if(a[j]>a[i]){
				
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	int max = a[0],min = a[0];
	for(i=0;i<5;i++){
		if(max<a[i]){
			max = a[i];
		}
		if(min>a[i]){
			min = a[i];
		}
	}
	printf("The marks in descending order is:\n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	printf("\nThe maximum marks is %d and minimum marks is %d\n",max,min);
}



