#include<stdio.h>

float max(float x,float y, float z);
int main(){
	float a,b,c;
	printf("enter a: ");
	scanf("%f", &a);
	printf("enetr b: ");
	scanf("%f", &b);
	printf("enetr c: ");
	scanf("%f", &c);
	printf("max is: %f", max(a,b,c));
	
}
float max(float x,float y, float z){
	if(x>y){
		if(x>z){
			return z;
		}
		else{
			return y;
		}
	}
	else{
		if(y>z){
			return y;
		}
		else{
			return z;
		}
	}

}
