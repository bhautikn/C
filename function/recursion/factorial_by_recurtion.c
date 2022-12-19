#include<stdio.h>
int fact(int a){
	if(a<1){
		return 1;
	}
	else{
		return a*fact(a-1);
	}
}
int main(){
	int f,factorial;
	printf("enter number: ");
	scanf("%d",&f);
	factorial=fact(f);
	printf("%d", factorial);
}
