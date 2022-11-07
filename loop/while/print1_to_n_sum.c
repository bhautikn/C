#include<stdio.h>

int main(){
	int i, j=1, sum=0;
	printf("enter number: ");
	scanf("%d", &i);
	while(j<=i){
		sum=sum+j;
		j=j+1;
	}
	printf("%d", sum);
}
