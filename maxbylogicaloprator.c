#include<stdio.h>

int main(){
	int a,b,c, max;
	printf("enter value of a b c");
	scanf("%d %d %d", &a, &b, &c);
	max = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("mx is %d", max);
	return 0;
	
}
