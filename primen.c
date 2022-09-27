#include <stdio.h>

int main(){

	int i=1,n,j=0;
	printf("enter no.: \n");
	scanf("%d",&n);
	while (i<=n){
		if(n%i==0){
			j = j+1;
		}
	i = i+1;
	}
	printf("your no. %d is divide : %d\n",n,j);
	if (j==2)
	{
		printf("and your no. is prime\n");
	}
	else{
		printf("your no. is not prime\n");
	}


}