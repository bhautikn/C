#include<stdio.h>
int sum(int x, int y);
int main(){
	int a,b;
	printf("enetr no a: ");
	scanf("%d",&a);
	printf("enetr no b: ");
	scanf("%d",&b);
	printf("sum is: %d", sum(a,b));
}
int sum(int x, int y){
	int sum;
	sum=x+y;
	return sum;
}
