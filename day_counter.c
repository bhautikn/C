#include <stdio.h>

int main(){

	int d, m, y;
	printf("enter day number:\n");
	scanf("%d", &d);
	y= d/365;
	d= d- y*365;
	m= d/30;
	d= d-m*30;
	printf("format is dd:mm:yy\n%d:%d:%d\n",d, m, y );

}