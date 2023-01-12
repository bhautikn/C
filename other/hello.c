#include<stdio.h>
#include<sys/ioctl.h>

int main(){
	int i;
	struct winsize w;
	ioctl(0,TIOCGWINSZ,&w);
	for (int i=0;i<=w.ws_row/2;i++)
	{
		printf("\n");
	}
	for (int i = 0; i <=w.ws_col/2-5; ++i)
	{
		printf(" ");
	}
	printf("hello world");
	for (int i = 0; i <=w.ws_row/2-2; ++i)
	{
		printf("\n");
	}
}