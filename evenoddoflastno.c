#include<stdio.h>

int main(){
	int a;
	printf("enetr no a");
	scanf("%d", &a);
	if ((a%10)%2==0)
	printf("no last digit is even");
	else
	printf("no last digit is odd");
	return 0;
}

