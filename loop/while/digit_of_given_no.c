#include<stdio.h>

int main(){
	int n;
	printf("enter number: ");
	scanf("%d", &n);
	while(n>0){
		printf("%d\n", n%10);
		n=n/10;
	}
}
