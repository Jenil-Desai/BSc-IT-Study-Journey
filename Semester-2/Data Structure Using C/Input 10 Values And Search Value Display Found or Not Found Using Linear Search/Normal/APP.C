#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,flag=0,sv;
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
		if(sv==x[i])
		{
			flag=1;
		}
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