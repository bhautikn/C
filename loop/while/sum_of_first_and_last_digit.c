#include<stdio.h>

int main(){
	int n, j=0,k, sum=0, i=0, len=0;
	printf("enter a number: ");
	scanf("%d", &n);
	k=n;
	while(n>0){
		i=n%10;
		n=n/10;
		len=len+1;
	}
	i=1;
	while(k>0){
		j=k%10;
		if(i==1 || i==len)
		sum=sum+j;
		k=k/10;
		i=i+1;
	}
	printf("sum of you num is %d", sum);
}

