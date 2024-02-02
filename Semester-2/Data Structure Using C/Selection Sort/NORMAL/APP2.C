#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,j,temp;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enter Value [%d] : ",i+1);
		scanf("%d",&x[i]);
	}

	for(i=0;i<10-1;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(x[i] > x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}

	for(i=0;i<10;i++)
	{
		printf("\t%d",x[i]);
	}

	getch();
}