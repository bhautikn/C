#include <stdio.h>

int main(){

	int n;
	printf("enter which no. you know even or odd\n");
	scanf("%d",&n);
	if (n%2 == 0){

		printf("no. is %d and it is even\n",n );
	}
	else {
		printf("no. is %d and it is odd\n",n );
	}
}