#include<stdio.h>
#include<conio.h>
void main()
{
	int x=1,i;
	clrscr();

	for(i=1;i<=10;i++)
	{
		x=x+x;
		printf("\t%d",x);
	}

	getch();
}