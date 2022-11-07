#include<stdio.h>

int main(){
	int n1, n2;
	printf("enter first number: ");
	scanf("%d", &n1);
	printf("enter second number: ");
	scanf("%d", &n2);
	if(n2-n1<0){
		return 0;
	}
	while(n1<=n2){
		if(n1%2==0){
			printf("%d\n", n1);
		}
		n1++;
	}
		
}
