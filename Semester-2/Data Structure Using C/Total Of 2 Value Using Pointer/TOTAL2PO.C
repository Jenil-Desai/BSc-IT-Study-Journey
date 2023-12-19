#include<stdio.h>
#include<conio.h>
void main()
{
	int val1,val2,*ptr1,*ptr2;
	clrscr();

	ptr1=&val1;
	ptr2=&val2;

	printf("\t\t\tTotal of 2 Value Using Pointer");
	printf("\n\t\t\t==============================");

	printf("\n\nEnter 1st Value          : ");
	scanf("%d",ptr1);

	printf("Enter 2nd Value          : ");
	scanf("%d",ptr2);

	printf("Total of 1st & 2nd Value : %d",*ptr1+*ptr2);

	getch();
}