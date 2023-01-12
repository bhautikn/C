#include<stdio.h>
#include<sys/ioctl.h>
#include<string.h>

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int main(){
	int height,width,i;
	char str[20];
	struct winsize w;
	ioctl(0,TIOCGWINSZ,&w);
	height=w.ws_row;
	width=w.ws_col;
	system("clear");
	gotoxy(width/2-18,height/2);
	printf("enter your name : ________________________");
	gotoxy(width/2,height/2);
	gets(str);
	system("clear");
	gotoxy(width/2-5,height/2);
	printf("welcome\n");
	gotoxy(width/2-10,height/2+2);
	printf("%s\n",str);
	for (int i = 0; i < height/2-5; ++i)
	{
		printf("\n");
	}
}