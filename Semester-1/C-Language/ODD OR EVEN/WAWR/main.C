#include<stdio.h>
#include<conio.h>
int oddoreven(int);
void main()
{
	int x,i,z=0;
	clrscr();

	printf("\t\t\tWelcome To Odd or Even Program");

	for(i=1;i<=5;i++)
	{
		printf("\n\nEnter Value : ");
		scanf("%d",&x);
		printf("=================");
		z=z+oddoreven(x);
	}

	printf("\nTotal Even : %d",z);
	printf("\nTotal Odd  : %d",5-z);
	printf("\n=================");

	getch();
}

int oddoreven(int x)
{
	if(x%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}