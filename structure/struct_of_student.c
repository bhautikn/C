#include<stdio.h>
#include<string.h>
struct student{
		char name[20];
		float pr;
		int age;
	};
int main(){
	int i;
	struct student s[5];
	for(i=0;i<5;i++){
		printf("\nenetr name of student %d: ",i+1);
		scanf("%s",s[i].name);
		printf("enter pr of student %d: ",i+1);
		scanf("%f",&s[i].pr);
		printf("enter age ofstudent %d: ",i+1);
		scanf("%d",&s[i].age);
	}
	for(i=0;i<5;i++){
		printf("\n\nname of student %d: %s",i+1,s[i].name);
		printf("\npr of student %d: %f",i+1,s[i].pr);
		printf("\nage ofstudent %d: %d",i+1,s[i].age);
	}
}
