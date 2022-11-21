#include<stdio.h>

int main(){
	int n, i=1,c=0;
    printf("enter n number");
	scanf("%d", &n);
	while(i<=n/2){
		if(n%i==0){c=1;}
		i++;
	}
		if(c==1){printf("prime");}
		else{printf("not prime");}
	}
