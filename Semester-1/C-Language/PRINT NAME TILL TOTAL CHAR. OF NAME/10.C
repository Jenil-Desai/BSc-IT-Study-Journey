#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int count=0,i;
	char name[20];
	clrscr();
	printf("Enter Name : ");
	gets(name);
	while(name[i]!=NULL)
	{
		count++;
		i++;
	}
	for(i=0;i<count;i++)
	{
		printf("\n%s",name);
	}
	getch();
}