#include<stdio.h>

int main(){
	int array[10],i,p=0,n=0;
	for(i=0;i<10;i++){
		printf("enter element: ");
		scanf("%d", &array[i]);
	}
	for(i=0;i<10;i++){
		if(array[i]>0){
			p=p+1;
		}
		else{
			n=n+1
		}
	}
}
