#include<stdio.h>

int main(){

	int a,b,c;
	printf("enter variable a\n");
	scanf("%d", &a);
	printf("enter variable b\n");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("now a is %d and b is %d\n",a , b );
	return 0;
}