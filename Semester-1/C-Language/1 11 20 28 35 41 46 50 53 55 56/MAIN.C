#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=10,k;
	clrscr();

	while(j!=0)
	{
		printf("\t%d",i);
		i=i+j;
		j--;
	}

	getch();
}