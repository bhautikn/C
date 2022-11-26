#include<stdio.h>

int main(){
	int rollno[10],i;
	for(i=0;i<10;i++){
		printf("enter element: ");
		scanf("%d", &rollno[i]);
	}
	for(i=0;i<10;i++){
		printf("%d ", rollno[i]);
	}
	printf("\n");
	for(i=9;i>=0;i--){
		printf("%d ", rollno[i]);
	}
}
