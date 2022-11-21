#include<stdio.h>

int main(){
	int i,j,a=1,n=4;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %d ", a);
			a=a+1;
		}
		printf("\n");
	}
}
