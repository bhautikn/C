#include "functions.h"

int main(){
	int height,width,i,temp,j;
	char c;
	screen_size(&height,&width);
	system("clear");
	gotoxy(width/2,height/2);
	printf("*");
	i=height/2;
	j=width/2;
	printf("\e[?25l");
	while(1)
		{
			c=getch();
			if (c=='w'){
				i--;
				system("clear");
				gotoxy(j,i);
				printf("*");
			}
			else if (c=='s')
			{
				i++;
				system("clear");
				gotoxy(j,i);
				printf("*");

			}
			else if (c=='d')
			{
				j++;
				system("clear");
				gotoxy(j,i);
				printf("*");
			}
			else if (c=='a')
			{
				j--;
				system("clear");
				gotoxy(j,i);
				printf("*");
			}
			if (c=='p')
			{
				system("clear");
				break;
			}
	}
	printf("\e[?25h");
}