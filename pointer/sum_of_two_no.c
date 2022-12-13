#include<stdio.h>

int main(){
	int *ptr1, *ptr2,a=2,b=6,sum=0;
	ptr1=&a;
	ptr2=&b;
	sum=*ptr1+*ptr2;
	printf("sum is: %d", sum);
	
}
