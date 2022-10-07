#include <stdio.h>

int main(){

	int unit;
	float price, total;

	printf("eneter value of unit\n");
	scanf("%d", &unit);
	if (unit <=50){
		price = unit*0.50;
	}
	else if (unit<=150){
		price = 25+(unit-50)*0.75;
	}
	else if (unit <= 250){
		price = 100+(unit-150)*1.25;
	}
	else if (unit >250){
		price = 225+(unit-250)*1.50;
	}
	total = price+(price*0.20);
	printf("total price of unit %d is %f\n",unit, total);
}