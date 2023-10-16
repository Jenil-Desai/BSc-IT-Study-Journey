#include<stdio.h>
#include<conio.h>
void main()
{
	int x[9],i,count=0;
	clrscr();
	for(i=0;i<9;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&x[i]);
	}
	printf("\n\n");
	clrscr();
	for(i=0;i<9;i++)
	{
		if(count==3)
		{
			printf("\n");
		}
		if(count==6)
		{
			printf("\n");
		}
		printf("%d\t",x[i]);
		count++;
	}
	getch();
}