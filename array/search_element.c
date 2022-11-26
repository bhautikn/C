#include<stdio.h>

int main(){
	int array[10],i,s;
	float avr=0;
	for(i=0;i<10;i++){
		printf("enter element %d: ", i+1);
		scanf("%d", &array[i]);
	}
	printf("search element: ");
	scanf("%d", &s);
	for(i=0;i<10;i++){
		if(array[i]==s){
			printf("index is %d", i);return 0;
		}
	}
	printf("nothing found");
}
