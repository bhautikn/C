#include<stdio.h>

int main(){
	int n ,i=2, p=0;
	printf("enter number: ");
	scanf("%d", &n);
	while(i<=n-1){
		if(n%i==0) 
		p=p+i;
		i=i+1;
	}
	if(p==n){
		printf("number is perfact");
	}
	else printf("not perfact");
	
}

