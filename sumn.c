#include<stdio.h>

int main()
{
	int n,i=0,sum=0;
	printf("enter no with want to sum\n");
	scanf("%d", &n);
	while (i<=n){
		sum=sum+i;
		i=i+1;
	}
	printf("sum is %d\n", sum);
	return 0;
}