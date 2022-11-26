#include<stdio.h>

int main(){
	int array[5],i, sum=0; 
	float avrage;
	for(i=0;i<5;i++){
		printf("enter element: ");
		scanf("%d", &array[i]);
		sum=sum+array[i];
	}
	avrage=(float)sum/(i+1);
	sum=0;
	for(i=0;i<5;i++){
		if(array[i]>avrage)
		sum=sum+1;
	}
	printf("totale no which grater then array %d", sum);
}

