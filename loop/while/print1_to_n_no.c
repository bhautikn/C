#include<stdio.h>

int main(){
	int i, j=1;
	printf("enter no range to print: ");
	scanf("%d", &i);
	while(j<=i){
		printf("%d\n", j);
		j++;
	}
}
