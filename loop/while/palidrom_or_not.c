#include<stdio.h>

int main(){
	int n, r=0, j;
	printf("enter number: ");
	scanf("%d", &n);
	j=n;
	while(n>0){
		r=r*10+(n%10);
		n=n/10;
	}
	if(j==r)
	printf("palindrome");
	else printf("no palindrome");
}
