#include<stdio.h>

int function(int a[10],int *sum,int *min,int *max);
int main(){
	int i, array[10]={1,3,4,5,5,3,6,6,7,9},sum=0,min,max;
	function(array,&sum,&min,&max);
	printf("sum is %d \nmax is: %d \nmin is: %d\n",sum,max,min );

}
int function(int a[10],int *sum,int *min,int *max){
	int i=0;
	for (int i = 0; i < 10; ++i)
	{
		if(i==0){
			*min=a[i];
			*max=a[i];
		}
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}
		*sum=*sum+a[i];
	}

}
