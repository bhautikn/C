#include<stdio.h>

int main(){
	int array1[5],array2[5],i;
	for(i=0;i<5;i++){
		printf("enter element: ");
		scanf("%d", &array1[i]);
	}
	for(i=0;i<5;i++){
		array2[i]=array1[i];
		printf(" %d ",array2[i]);
	}
	
}
