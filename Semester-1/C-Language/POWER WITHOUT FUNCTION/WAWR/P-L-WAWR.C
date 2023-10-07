#include<stdio.h>
#include<conio.h>
int hello420(int,int);
void main()
{
	int base,expo,z;
	clrscr();

	printf("Enter Base Value : ");
	scanf("%d",&base);

	printf("Enter Exponent Value : ");
	scanf("%d",&expo);

	z=hello420(base,expo);

	printf("Total : %d",z);
	getch();
}
int hello420(int base, int expo)
{
	int z=1,i;
	for(i=1;i<=expo;i++)
	{
		z=base*z;
	}
	return z;
}
