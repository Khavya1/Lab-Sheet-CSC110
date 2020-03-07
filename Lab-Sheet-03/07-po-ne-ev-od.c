#include<stdio.h>

int main(){
	
	int a[25];
	int i,j,k,po=0,ne=0,ev=0,od=0;

	printf("Enter 25 numbers:\n");

	for(i=0;i<25;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<25;i++){
		if(a[i]%2==0){
			ev +=1;
		}
		if(a[i]%2!=0){
			od +=1;
		}
		if(a[i]>=0){
			po +=1;
		}
		if(a[i]<0){
			ne +=1;
		}
	}
	printf("The number of positive is %d \n The number of negative is %d \n The  number of even are %d \n The number of odd are %d\n",po,ne,ev,od);
}
