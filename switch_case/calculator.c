#include<stdio.h>

int main(){
	
	int n1,n2,c, ans;
	float div;
	printf("enetr your first number: ");
	scanf("%d", &n1);
	printf("\nenetr your second number: ");
	scanf("%d", &n2);
	printf("\nenetr your choice : \n 1 sum \n 2 sub \n 3 multi \n 4 div\n :");
	scanf("%d", &c);
	switch(c){
		case 1:
			ans=n1+n2;
			printf("your sum is %d", ans);
			break;
		case 2:
			ans=n1-n2;
			printf("your sum is %d", ans);
			break;
		case 3:
			ans=n1*n2;
			printf("your sum is %d", ans);
			break;
		case 4:
			div=n1/n2;
			printf("your sum is %f", div);
			break;
		default:
			printf("invalid input");	
	}

}
