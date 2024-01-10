#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i,*ptr;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter Value [%d] : ",i+1);
		scanf("%d",ptr+i);
	}

	for(i=0;i<5;i++)
	{
		printf("\t%d",*(ptr+i));
	}

	getch();
}