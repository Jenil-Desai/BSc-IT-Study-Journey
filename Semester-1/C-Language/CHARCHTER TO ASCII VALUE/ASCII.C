#include<stdio.h>
#include<conio.h>
void ascii(int);
void main()
{
	char x;
	clrscr();

	printf("Enter Value : ");
	scanf("%c",&x);

	ascii(x);
	getch();
}
void ascii(int x)
{
	printf("ASCII Value of %c is %d.",x,x);
}