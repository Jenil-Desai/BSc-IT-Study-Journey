#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,x=1;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",x%2==1);
			x++;
		}
		printf("\n");
	}
	getch();
}