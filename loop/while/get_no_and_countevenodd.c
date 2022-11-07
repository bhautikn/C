#include<stdio.h>

int main(){
	int i,j=1, even=0, odd=0;
	while(j<=10){
		printf("enter number: ");
		scanf("%d", &i);
		if(i%2==0){
			even=even+1;
		}
		else{
			odd=odd+1;
		}
		j++;
	}
	printf("count of even number %d\n", even);
	printf("count of odd number %d", odd);

}
