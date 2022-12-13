#include<stdio.h>

int main(){
	int a[5],i,*ptr;
	ptr=&a;
	for(i=0;i<5;i++){
		printf("eneter element a[%d]",i);
		scanf("%d",ptr+i);
	}
	for(i=0;i<5;i++){
		printf("%d",*(ptr+i));
	}
	
}
