#include<stdio.h>
#include<conio.h>
int flag=0,sv;
void search(int);
void main()
{
	int x[10],i;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enter Value [%d] : ",i+1);
		scanf("%d",&x[i]);
	}

	printf("Enter Search Value : ");
	scanf("%d",&sv);

	for(i=0;i<10;i++)
	{
		search(x[i]);
	}

	if(flag==0)
	{
		printf("\n\n\tSearch Value Not Found");
	}
	else
	{
		printf("\n\n\tSearch Value Found");
	}

	getch();
}

void search(int num)
{
	if(sv==num)
	{
		flag=1;
	}
}