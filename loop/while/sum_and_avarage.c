#include<stdio.h>

int main(){
	int sum=0, n=0, i=0;float avarage=0;
	while(1){
		printf("enter number: ");
		scanf("%d", &n);
		if(n==0) break;
		sum=sum+n;
		i=i+1;
	}
	avarage= sum/i;
	printf("sum of your num is %d\n", sum);
	printf("avarage of your num is %f", avarage);
}
