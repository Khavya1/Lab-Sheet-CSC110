#include<stdio.h>

int main(){
	
	int a[10];
	int i;

	printf("Enter 10 numbers to sort in ascending order:\n");

	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	ascending(10,a);
	printf("Numbers after sorting in ascending");
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
}

int ascending(int m,int x[ ]){

	int i,j,t;

	for(i = 1; i <= m-1; i++){                               
          for(j = 1; j <= m-i; j++){                             
             if(x[j-1] >= x[j]){                                
                t = x[j-1];                                    
                x[j-1] = x[j];                                 
                x[j] = t;
			 }
		  }
	}  
}