#include <stdio.h>

int main(){
	int n, b[32], i, t=0;
	printf("enter decimal number: ");
	scanf("%d", &n);
	t=n;
	for(i=0;i<32;i++){
		b[i]=n%2;
		n=n/2;
		if(n==0)break;
	}
	printf("binary of %d is: ",t );
	for (int i = 32; i>=0; i--)
	{
		if(b[i]==1) t=1;
		if (t==1)
			printf("%d", b[i]);
	}
}