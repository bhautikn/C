#include<stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	int *ptr;
	printf("%d", a[0]);
	printf("\n%d", &a[0]);
	printf("\n%d", &a[1]);
	printf("\n%d", a+1);
}
