#include<stdio.h>

int main(){
	int i,j,n=4,k,a=1;
	char b='A';
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			if(i%2==1){
				printf("%d ",a);
				a++;
			}
			else{
				printf("%c ",b);
				b++;
			}
		}
		printf("\n");
	}
}
