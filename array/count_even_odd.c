#include<stdio.h>

int main(){
	int array[10],i,even=0,odd=0;
	for(i=0;i<10;i++){
		printf("enter element: ");
		scanf("%d", &array[i]);
	}
	for(i=0;i<10;i++){
		if(array[i]%2==0)
			even=even+1;
		else
			odd=odd+1;
	}
	printf("count of even number: %d\n ", even);
	printf("count of even number: %d ", odd);
	
}
