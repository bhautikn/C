#include<stdio.h>

int main(){
	int i, j=1;
	printf("enter no range to print odd number: ");
	scanf("%d", &i);
	while(j<=i){
		printf("%d\n",j);
		j=j+2;
		
	}
}
