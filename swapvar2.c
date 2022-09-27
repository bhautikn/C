#include<stdio.h>

int main(){

	int a,b,c;
	printf("enter variable a\n");
	scanf("%d", &a);
	printf("enter variable b\n");
	scanf("%d", &b);
	a = a+b;
	b = a-b;
	a = a-b;

	printf("now a is %d and b is %d\n",a , b );
	return 0;
}