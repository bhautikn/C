#include<stdio.h>

int main(){
	int i, no[10], n, t=0;
	printf("enter some numbers: ");
	scanf("%d",&n);
	for(i=0;i<=10;i++){
		no[i]=n%10;
		n=n/10;
		if(n==0)break;
	}
	for (i=10; i>=0; i--){
		if(no[i]!=0){
			t=2;
		}
		if(t==2){
		switch(no[i]){
			case 1:printf("one ");break;
			case 2:printf("two ");break;
			case 3:printf("three ");break;
			case 4:printf("four ");break;
			case 5:printf("five ");break;
			case 6:printf("six ");break;
			case 7:printf("seven ");break;
			case 8:printf("eight ");break;
			case 9:printf("nine ");break;
			case 0:printf("zero ");break;
		 }
		}
	}
}