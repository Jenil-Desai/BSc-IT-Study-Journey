#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,count=0,count1=0;
	char x[20],se;
	clrscr();
	printf("Enter Name  : ");
	gets(x);
	strlwr(x);
	printf("Search Char : ");
	scanf("%c",&se);
	while(x[i]!=NULL)
	{
		count++;
		i++;
	}
	for(i=0;i<count;i++)
	{
		if(x[i]==se)
		{
			count1++;
		}
	}
	printf("=================");
	printf("\nTotal %c is %d ",se,count1);
	printf("\n=================");
	getch();
}