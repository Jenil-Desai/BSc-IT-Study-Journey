#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int x,z;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&x);

	z=fact(x);

	printf("%d is factorial of %d",z,x);

	getch();
}

int fact(int x)
{
	int i,z=1;
	for(i=1;i<=x;i++)
	{
		z=i*z;
	}

	return z;
}