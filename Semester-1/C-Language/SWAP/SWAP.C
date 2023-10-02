#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&x);

	printf("Enter Value : ");
	scanf("%d",&y);

	z=x;
	x=y;
	y=z;

	printf("X = %d",x);
	printf("\nY = %d",y);

	getch();
}