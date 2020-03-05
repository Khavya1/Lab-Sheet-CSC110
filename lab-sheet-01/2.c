#include<stdio.h>
int main() {
	int number,r,sum,temporary;
	for(number=1;number<=500;number++){
		temporary=number;
		sum=0;
		
		while(temporary!=0){
			r=temporary%10;
			temporary=temporary/10;
			sum=sum+(r*r*r);
		}
		if(sum==number){
			printf("%d\n",number);
			}
	}
}
