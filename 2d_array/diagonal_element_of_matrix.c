#include<stdio.h>

int main(){
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("%d ",a[i][i]);
				sum=sum+a[i][i];
			}
		}
	}
	printf("%d")
}
