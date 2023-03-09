/*
	Given an array of integers and a positive integer k 
	determine the number of (i, j) pairs where i<j and arr[i] + arr[j] is divisible by k
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,k,*arr,count=0;
	scanf("%d",&n);
	scanf("%d",&k);
	arr = (int *)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
		scanf("%d",&arr[i]);
	for (int i = 0; i < n-1; ++i)
	{
		for (int j=i+1; j < n; ++j)
		{
			if ((arr[i]+arr[j])%k==0)
				count++;
		}
	}
	printf("%d",count);
	free(arr);
}