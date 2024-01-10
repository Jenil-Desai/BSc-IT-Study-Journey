/*==========================
  RANDOM NUMBER GENRATOR
  VERSION: V.2.1
  DEVLOPED BY JENIL M. DESAI
  DEVLOPED IN C-LANGUAGE
  ==========================*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void rangen(int,int);
void length();
void quantity(int);
void welcome();
void main()
{
	clrscr();
	randomize();
	length();
	getch();
}
void rangen(int len,int qty)
{
	int i,j,option;
	for(i=0;i < qty;i++)
	{
		printf("\nRandom Number [%d] : ",i+1);
		for(j=0;j < len;j++)
		{
			printf("%d",rand()%10);
		}
	}
	printf("\n\nWant To Genrate Another? [Y-1] : ");
	scanf("%d",&option);

	if(option==1)
	{
		main();
	}
	else
	{
		printf("\n\n\t\t\t---Thanks For Genrating---");
		getch();
		exit(0);
	}
}
void length()
{
	int len;
	clrscr();
	welcome();
	printf("\n\nEnter Length  : ");
	scanf("%d",&len);
	if(len>50 || len==0)
	{
		printf("\n\n\t\t\t---Length range is 1 To 50---");
		getch();
		length();
	}
	else
	{
		quantity(len);
	}
}
void quantity(int len)
{
	int qty;
	clrscr();
	welcome();
	printf("\n\nEnter Quantity : ");
	scanf("%d",&qty);
	if(qty > 5 || qty == 0)
	{
		printf("\n\t\t\t---Quantity Range Is 1 To 5---");
		getch();
		quantity(len);
	}
	else
	{
		rangen(len,qty);
	}
}
void welcome()
{
	printf("\t\t\t=================================");
	printf("\n\t\t\tWelcome To Random Number Genrator");
	printf("\n\t\t\t=================================");
}