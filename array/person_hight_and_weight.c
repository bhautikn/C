#include<stdio.h>

int main(){
	int height[5],weight[5],i,h=0,w=0,p=0;
	for(i=0;i<5;i++){
		printf("enter height of person %d: ",i+1);
		scanf("%d", &height[i]);
		printf("enter weight of person %d: ",i+1);
		scanf("%d", &weight[i]);
		printf("\n");
	}
	for(i=0;i<5;i++){
		if(height[i]>170 && weight[i]<50){
			p=p+1;
		}	
	}
	printf("total person whose hight > 170 and weight <50: %d ",p);
}
