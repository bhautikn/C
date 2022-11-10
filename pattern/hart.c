#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, k, l;
	system("clear");
	for(int i=1;i<=5;i++){
		printf("\n");
	}
	for(i=1;i<=10;i=i+3){
		for(j=10;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i*2-2;k++){
			printf("*");
		}
		for(l=10;l>i;l--){
			printf(" ");
		}
		for(int m=10; m>=i;m--){
			printf(" ");
		}
		for(int n=1;n<=i*2-2;n++){
			printf("*");
		}
		printf("\n");
	}
	for (int i = 19; i >=0; i--)
	{
		for(j=19;j>i;j--){
			printf(" ");
		}
		for(int k=1;k<i*2+1;k++){
			printf("*");
		}
		printf("\n");
	}

}