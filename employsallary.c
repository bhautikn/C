#include<stdio.h>

int main(){
	int bs;
	float hra, da, total;
	printf("enetr your basic sallary");
	scanf("%d", &bs);
	if(bs<10000)
	total=bs;
	else if (bs>=10000 && bs<=20000){
		hra=(bs*2)/10;
		da=(bs*8)/10;
		total= bs+hra+da;
	}
	else if (bs>=20000 && bs<=30000){
		hra=(bs*25)/100;
		da=(bs*9)/10;
		total= bs+hra+da;
	}
	else{
		hra=(bs*3)/10;
		da=(bs*95)/100;
		total= bs+hra+da;
	}
	printf("sallary is %f", total);
}
