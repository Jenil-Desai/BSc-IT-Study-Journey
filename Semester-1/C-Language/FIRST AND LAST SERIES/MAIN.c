#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10,i;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf(" %d %d",i,x);
		x--;
	}

	getch();
}