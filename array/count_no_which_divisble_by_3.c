#include<stdio.h>

int main(){
	int array[5],i,ans=0;
	for(i=0;i<5;i++){
		printf("enter element: ");
		scanf("%d", &array[i]);
	}
	for(i=0;i<5;i++){
		if(array[i]%3==0){
			ans=ans+1;
		}
	}
	printf("totale no which divisble by 3 is %d", ans);
}
