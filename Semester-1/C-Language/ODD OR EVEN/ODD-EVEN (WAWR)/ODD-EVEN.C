#include<stdio.h>
#include<conio.h>
void oddoreven(int);
void main()
{
	int x,i;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\nEnter Value:");
		scanf("%d",&x);
		oddoreven(x);
	}

	getch();
}

void oddoreven(int x)
{
	if(x%2==0)
	{
		printf("%d is Even",x);
	}
	else
	{
		printf("%d is Odd",x);
	}
}