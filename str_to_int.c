#include<stdio.h>

void main(){
	char s[10]="123456789";
	int n=0;

	for (int i=0;s[i]!='\0'; ++i)
	{
		if(s[i]>=48 && s[i]<=58){
			n*=10;
			n+=s[i]-48;
		}
		else break;
	}
	printf("%d",n);
}