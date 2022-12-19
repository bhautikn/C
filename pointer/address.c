#include<stdio.h>
void main(){
	int a=5;
	int *p;
	p=&a;
	printf("a=%d \n",a);
	printf("&a=%d \n",&a);
	printf("p=%d \n",p);
	printf("&p=%d \n",&p);
	printf("*p=%d \n",*p);
	printf("*(&a)=%d \n",*(&a));
}
