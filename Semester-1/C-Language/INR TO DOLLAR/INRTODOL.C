#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	int x;
	float y=0;
	char opt;
	clrscr();

	printf("\t\t\tWELCOME TO CURRENCY CONVERTER");
	printf("\n\t\t\t=============================");

	start:

	printf("\n\n============");
	printf("\nEnter INR : ");
	scanf("%d",&x);
	printf("============");

	if(isdigit(x))
	{
		y=x*83.20;
		printf("\nDollar : %.2f",y);
		printf("\n============");

		option:

		printf("\nA for converting again | E for exit : ");
		scanf(" %c",&opt);
		printf("============");

		if(opt=='a')
		{
			goto start;
		}
		else if(opt=='e')
		{

		}
		else
		{
			textcolor(4+128);
			printf("\n");
			cprintf("Invalid Selection!");
			printf("\n============");
			goto option;
		}
	}
	else
	{
		x=0;
		goto start;
	}
}