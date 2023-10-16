#include<stdio.h>
#include<conio.h>
void main()
{
	int i,count=0;
	char x[20];
	clrscr();
	printf("Enter Name :");
	gets(x);
	while(x[i]!=NULL)
	{
		count++;
		i++;
	}
	printf("\nTotal Length : %d",count);
	getch();
}