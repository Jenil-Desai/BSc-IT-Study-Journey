#include<stdio.h>
#include<conio.h>

void main()
{
	int x[10],i,j,temp;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("\nEnter Value [%d] : ",i+1);
		scanf("%d",&x[i]);
	}

	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(x[j] > x[j+1])
			{
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}

	for(i=0;i<10;i++)
	{
		printf("\n%d). %d",i+1,x[i]);
	}

	getch();
}