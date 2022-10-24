#include<stdio.h>

int main(){
	int i,j,space,line;
	for(i=1;i<=5;i++){

		for(space=5;space>i;space--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(line=1;line<=i;line++){
			printf("*");
		}
		printf("\n");
	}
}
