#include<stdio.h>

int main(){
	int i=100, j=1;
	while(i<=200){
		if(i%7==0){
			if(i%5!=0)
			printf("%d\n", i);
		}
		i++;
	}
}
