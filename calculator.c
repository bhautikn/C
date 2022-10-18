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
	if (c==1){
		ans= n1+n2;
		printf("your sum is :%d ", ans);
	}
	else if (c==2){
		ans= n1-n2;
		printf("your sub is :%d ", ans);
	}
	else if (c==3){
		ans= n1*n2;
		printf("your multi is :%d ", ans);
	}
	else if (c==4){
		div = n1/n2;
		printf("your div is :%f ", div);
	}
	else{
		printf("invalid input");
	}
}
