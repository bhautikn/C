#include<stdio.h>

int main(){
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element a[%d][%d]: ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
