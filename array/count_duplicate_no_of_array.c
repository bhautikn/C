#include<stdio.h>

int main(){
	int array[5],i,j,d=0;
	for(i=0;i<5;i++){
		printf("enter element: ");
		scanf("%d", &array[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(array[j]==0){continue;}
			if(array[i]==array[j]){
				d=d+1;
				array[j]=0;
			}	
		}
	}
	printf("totale duplicate is %d", d);
}
