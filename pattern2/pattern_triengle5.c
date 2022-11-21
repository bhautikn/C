#include<stdio.h>

int main(){
	int i,j,n=4,k;
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			printf("  ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}
