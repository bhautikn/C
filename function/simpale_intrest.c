#include<stdio.h>
float intrest(int a,int b,int c);
int main(){
	int p,r,t;
	printf("enter your principale amount: ");
	scanf("%d", &p);
	printf("enetr rate of intrest: ");
	scanf("%d", &r);
	printf("enetr your time piriod of intrest: ");
	scanf("%d", &t);
	printf("your intrest is: %f", intrest(p,r,t));
}
float intrest(int a,int b,int c){
	float ans;
	ans=(float)(a*b*c)/100;
	return ans;
}
