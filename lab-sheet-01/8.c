#include<stdio.h>
int main() {
	int p=0,n=0,z=0,a,b;
char ch = 'y';
	do{
		printf("Enter a number:");
		scanf("%d",&a);
		if(a>0){p+=1;}
		else if(a<0){n+=1;}
		else if(a==0){z+=1;}
		 printf("\n\nCalculate one more time ? ('y' for Yes, 'n' for no ) : ");
        scanf(" %c", &ch);
	}
while(ch == 'y'); 
	printf("%d no of positive %d no of negative %d no of zeros",p,n,z);
}

