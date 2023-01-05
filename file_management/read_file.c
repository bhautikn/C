#include<stdio.h>

void main(){
	FILE *file;
	char ch, str[20];

	file=fopen("text.txt","r");
	while (fscanf(file, "%s", str) == 1)
        printf("%s ", str);
	fclose(file);
}