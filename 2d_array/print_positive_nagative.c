#include<stdio.h>

int main(){
	int a[3][3],i,j,p,n;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element a[%d][%d]: ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>=0){
				p=p+1;
			}
			else{
				n=n+1;
			}	
		}
	}
	printf("no of positive is: %d\n no of nagative is: %d",p,n);
}
