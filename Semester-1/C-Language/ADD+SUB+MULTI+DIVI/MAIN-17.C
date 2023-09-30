#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	char opt;
	clrscr();

	printf("Enter 1st Value : ");
	scanf("%d",&x);

	printf("Enter 2st Value : ");
	scanf("%d",&y);

	printf("\n====================");
	printf("\na). Addition");
	printf("\nb). Subtraction");
	printf("\nc). Multiplication");
	printf("\nd). Divison");
	printf("\n====================");

	printf("\n\n Select an Option : ");
	scanf(" %c",&opt);
	printf("\n====================\n");

	if(opt=='a')
	{
		printf("Addition of %d and %d = %d",x,y,x+y);
	}
	else if(opt=='b')
	{
		printf("Subtraction of %d and %d = %d",x,y,x-y);
	}
	else if(opt=='c')
	{
		printf("Multiplication of %d and %d = %d",x,y,x*y);
	}
	else if(opt=='d')
	{
		printf("Division of %d and %d = %d",x,y,x/y);
	}
	else
	{
		printf("Invalid Selection");
	}

	getch();
}