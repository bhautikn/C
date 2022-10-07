#include <stdio.h>

int main(){

	int unit, unit1=0 ,unit2=0,unit3=0 ;
	float total= 0, t1= 0, t2= 0, t3= 0, t4= 0;
	printf("enter unit of light bill\n");
	scanf("%d", &unit);

	if (unit > 50){
		unit1 = unit-50;
		t1 = 25;

		if (unit1 > 100){
			unit2 =unit1-100;
			t2 = 75;

			if (unit2 > 100){
				unit3 = unit2 -50;
				t3=100;

				if (unit3 >100){
					t4=unit3*1.25;

				}
				else{
					t4 = unit3*1.25;
				}
			}
			else{
				t3 = unit2*1;
			}
		}
		else {
			t2 = unit1*0.75;
		}
	}
	else{
		t1 =unit*0.75;
	}
	total = t1+t2+t3+t4;
	printf("total amount is %f\n", total );
}