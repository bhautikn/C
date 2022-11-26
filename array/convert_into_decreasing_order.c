#include<stdio.h>

int main(){
	int i,j,array[5]={4, 4, 5, 3, 1},max;
	for (int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(array[i]>array[j]){
				max=array[i];
				array[i]=array[j];
				array[j]=max;
			}
		}
	}
	for(int j=0;j<5;j++){
		printf("%d ",array[j]);
	}
}