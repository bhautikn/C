#include<stdio.h>
#include<string.h>

int main(){
	struct employ{
		char name[20];
		int id;
	}e1;
	printf("enetr name of employ: ");
	gets(e1.name);
	printf("enetr id of employ: ");
	scanf("%d",&e1.id);
	printf("name of employ: %s\n",e1.name);
	printf("id of employ: %d",e1.id);
}
