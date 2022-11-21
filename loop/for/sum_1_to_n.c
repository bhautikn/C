#include<stdio.h>

int main(){
	int n, sum, i;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum of %d num is %d",n,sum);
}
