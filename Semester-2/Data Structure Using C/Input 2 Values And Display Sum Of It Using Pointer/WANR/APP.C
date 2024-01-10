#include<stdio.h>
#include<conio.h>
void sum(int*,int*);
void main()
{
	int num1,num2;
	clrscr();

	printf("Enter 1st Value : ");
	scanf("%d",&num1);

	printf("Enter 2nd Value : ");
	scanf("%d",&num2);

	sum(&num1,&num2);

	getch();
}

void sum(int *p1,int *p2)
{
	printf("\n\n\tSum : %d",*p1 + *p2);
}