#include<stdio.h>

int main(){
	int a[3][3],b[3][3],c[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element a[%d][%d]: ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element b[%d][%d]: ",i+1,j+1);
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=(a[i][1]*b[i][j])+(a[i][2]+b[2][j])+(a[i][3]*b[3][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
