#include<stdio.h>
#include<string.h>
struct book{
		char title[20];
		char author[20];
		char p[10];
		int page;
	};
int main(){
	int i;
	
	struct book b[3];
	for(i=0;i<3;i++){
		printf("\nenetr book title of book%d: ",i);
		scanf("%s",b[i].title);
		printf("enter author of book of book%d: ",i);
		scanf("%s",b[i].author);
		printf("enter publication of book of book%d: ",i);
		scanf("%s",b[i].p);
		printf("enter page of book of book%d: ",i);
		scanf("%d", &b[i].page);
	}
	for(i=0;i<3;i++){
		printf("\nbook title of book%d: %s",i,b[i].title);
		printf("\nauthor of book of book%d: %s",i,b[i].author);
		printf("\npublication of book of book%d: %s",i,b[i].p);
		printf("\npage of book of book%d: %d\n",i,b[i].page);
	}
}
