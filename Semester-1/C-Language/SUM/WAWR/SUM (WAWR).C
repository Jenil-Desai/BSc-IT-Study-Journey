#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
	int x,y,z;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&x);

	printf("Enter Value : ");
	scanf("%d",&y);

	z=sum(x,y);

	printf("Total : %d",z);

	getch();
}

int sum(int x,y)
{
	return x+y;
}