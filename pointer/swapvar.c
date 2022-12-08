#include<stdio.h>

void swapvar(int *a,int *b);
int main(){
	int x=10,y=20,*p;
	swapvar(&x,&y);
	printf("x is %d y is %d\n",x,y);
}
void swapvar(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}