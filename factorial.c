#include <stdio.h>

int main(){

	int i=1,n;
	int fact=1;

	printf("enter no.\n");
	scanf("%d",&n);

	while (i<=n){
		fact= fact*i;
		i = i+1;
	}

	printf("factorial of %d is %d \n",n,fact );
}