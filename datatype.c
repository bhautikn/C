#include<stdio.h>

int main(){
	
	char a;
	printf("enetr your char or digit: ");
	scanf("%c", &a);
	if (a>=65 && a<=90)
	printf("CAPITAL");
	else if (a>=97 && a<=122)
	printf("small");
	else if (a>=48 && a<=57)
	printf("digit");
	else
	printf("spacial char");
	
}
