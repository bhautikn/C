#include<stdio.h>

int main(){
	int i,ans=1, n;
	printf("enter number to get factorial: ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		ans=ans*i;
	}
	printf("your ans is %d", ans);
}
