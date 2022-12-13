#include<stdio.h>

int main(){
	int *ptr1, *ptr2,a=2,b=6,temp;
	ptr1=&a;
	ptr2=&b;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("a is: %d\nb is: %d",a,b);
}
