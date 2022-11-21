#include<stdio.h>

int main(){
	int i,x,y,ans=1;
	printf("for X^Y enter x: \n");
	scanf("%d",&x);
	printf("enter y: ");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
	printf("%d", ans);
}
