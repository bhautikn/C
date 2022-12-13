#include<stdio.h>
void min_max(int x, int y);
int main(){
	int a,b;
	printf("enetr no a: ");
	scanf("%d",&a);
	printf("enetr no b: ");
	scanf("%d",&b);
	min_max(a,b);
}
void min_max(int x, int y){
	if(x>y){
		printf("%d is maximux", x);
		printf("\n%d is minimum", y);
	}
	else{
		printf("%d is minimum", x);
		printf("\n%d is maximux", y);
	}
}

