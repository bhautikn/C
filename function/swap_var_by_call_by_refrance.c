#include<stdio.h>
void swap_var(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a=10,b=20;
	printf("a is: %d\nb is: %d",a,b);
	swap_var(&a,&b);
	printf("\n\nnow a is: %d \nb is: %d",a,b);
}
