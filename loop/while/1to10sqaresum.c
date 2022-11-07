#include<stdio.h>

int main(){
	int i=1, sum;
	while(i<=10){
		sum=sum+i*i;
		i=i+1;
	}
	printf("%d", sum);	
}
