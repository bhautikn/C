#include<stdio.h>

int main(){
	FILE *file;
	char a[]= "this is hello world";
	file=fopen("text_file","w");
	for (int i = 0; a[i]!='\0' ; ++i)
	{
		putc(a[i],file);
	}
	fclose(file);
}