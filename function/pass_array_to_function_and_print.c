#include<stdio.h>

void array_print(int array[]){
	int i;
	for (i=0;i<5;i++){
		printf("%d\n", array[i]);
	}
}

int main(){
	int a[5],i;
	for (i=0;i<5;i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	array_print(a);
}
