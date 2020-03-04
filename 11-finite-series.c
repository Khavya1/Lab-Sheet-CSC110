#include<stdio.h>

int main() {
	int x,n;
	float ans;
	printf("Enter the value of x");
	scanf("%d",&x);
	printf("Enter the value of n");
	scanf("%d",&n);
	ans = series(x,n);
	printf("The sum of the series is %f",ans);
}
int series(int x,int n){
	float sum=1,no_roe=1;
	int i;
	for(i=1;i<n;i++){
		no_roe = no_roe*x/(float)i;
		sum = sum+no_roe;
	}
	return sum;
}

