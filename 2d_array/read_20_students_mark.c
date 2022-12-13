#include<stdio.h>

int main(){
	int a[20][3],i,j;
	for(i=0;i<20;i++){
		for(j=0;j<3;j++){
			printf("enter mark of student %d subject is %d:  ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<20;i++){
		printf("student %d: ", i);
		for(j=0;j<3;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
}
