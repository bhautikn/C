#include<stdio.h>
#include<math.h>

int main(){
	int i,n, sum=0, len=0;
	printf("eneter number: ");
	scanf("%d", &n);
	i=n;
	while(i>0){
		i=i/10;
		len=len+1;
	}
	i=n;
	while(n>0){
		sum=sum+pow(n%10, len);
		n=n/10;
	}
	if(i==sum){printf("number is armstrong");}
	else printf("not armstrong");
}
