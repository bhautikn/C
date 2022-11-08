#include <stdio.h>

int main(){
	int n;
	printf("enter no of row: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for (int j=1;j<=i; j++)
		{
			if (i==1||i==n||j==1||j==n||i==j)
				printf(" 0");
			else
				printf("  ");

		}
		printf("\n");
	}
}