#include<stdio.h>
#include<conio.h>
void main()
{
	int base,expo,i,z=1,total;
	clrscr();

	printf("Enter Base Value : ");
	scanf("%d",&base);

	printf("Enter Exponent Value : ");
	scanf("%d",&expo);

	for(i=1;i<=expo;i++)
	{
		z=base*z;
	}

	printf("Total : %d",z);

	getch();
}