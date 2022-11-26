#include<stdio.h>

int main(){
	int array[10],i,max=0,min=0,sum=0;
	float avr=0;
	for(i=0;i<10;i++){
		printf("enter element: ");
		scanf("%d", &array[i]);
	}
	for(i=0;i<10;i++){
		if(i==0)
			max=array[i];
			min=array[i];
		if(array[i]<min)
			min=array[i];
		if(array[i]>max)
			max=array[i];
		sum=sum+array[i];
	}
	avr=(float)sum/(i+1);
	printf("max no is: %d\n ", max);
	printf("min no is: %d\n ", min);
	printf("sum of no is: %d\n ", sum);
	printf("avrage of no is: %f\n ", avr);
}
