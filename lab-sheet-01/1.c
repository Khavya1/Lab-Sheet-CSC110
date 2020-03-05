#include<stdio.h>
int main() {
	int f1=0,f2=1,n,i,c;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	printf("First %d terms of FIBONACCI series are:\n",n);
	for(c=0;c<n;c++)
	{
		if(c<=1)
			i=c;
		else
		{
			i=f1+f2;
			f1=f2;
			f2=i;
		}
		printf("%d\n",i);
	}
}

