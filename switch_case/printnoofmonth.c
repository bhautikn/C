#include<stdio.h>

int main(){
	int m;
	printf("enter month number:");
	scanf("%d", &m);
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days in your input month");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days in your input month");
			break;
		case 2:
			printf("28 or 29 days");
			break;
		default:
			printf("invalid input");
	}
}
