#include<stdio.h>

int main(){
	int j=20,*pint;
	float k=20.33,*pfloat;
	char a='b',*pchar;
	pint=&j;
	pfloat=&k;
	pchar=&a;
	printf("%d",*pint);
	printf("\n%f", *pfloat);
	printf("\n%c", *pchar);
}
