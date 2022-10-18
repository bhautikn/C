#include<stdio.h>

int main(){
	int a, b, c, d, e, per;
	printf("enetr your subject's marks by order a to e:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	per= (a+b+c+d+e)/5;
	if (per>70)
	printf("distiction");
	else if (per >60)
	printf("first class");
	else if(per >45)
	printf("second class");
	else if(per >35)
	printf("pass");
	else
	printf("fali");
	return 0;
}

