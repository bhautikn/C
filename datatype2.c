#include<stdio.h>

int main(){
	char a;
	printf("enetr your char or digit: ");
	scanf("%c", &a);
	if (a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9' || a=='0')
	printf("number");
	else if(a=='a' || a=='b' || a=='c' || a=='d' || a=='e' || a=='f' || a=='g' || a=='h' || a=='i' || a=='j' || a=='k' || a=='l' || a=='m' || a=='n' || a=='o' || a=='p' || a=='q' || a=='r' || a=='s' || a=='t' || a=='u' || a=='v' || a=='w' || a=='x' || a=='y' || a=='z') 
	printf("small");
	else if(a=='A' || a=='B' || a=='C' || a=='D' || a=='E' || a=='F' || a=='G' || a=='H' || a=='I' || a=='j' || a=='K' || a=='L' || a=='M' || a=='N' || a=='O' || a=='P' || a=='Q' || a=='R' || a=='S' || a=='T' || a=='U' || a=='V' || a=='W' || a=='X' || a=='Y' || a=='Z')
	printf("capital");
	else
	printf("spacial char");
}
