#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int count=0,i;
	char x[20],y;
	clrscr();
	printf("Enter Name : ");
	scanf("%s",x);
	printf("Search For Charter : ");
	scanf(" %c",&y);
	for(i=0;i<20;i++)
	{
		if(x[i]==y)
		{
			count++;
		}
	}
	printf("Total : %d %s",count);
}