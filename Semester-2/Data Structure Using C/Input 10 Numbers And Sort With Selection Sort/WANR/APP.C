#include<stdio.h>
#include<conio.h>
void sort(int[]);
void main()
{
	int x[10],i;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enter Value [%d] : ",i+1);
		scanf("%d",&x[i]);
	}

	sort(x);

	getch();
}

void sort(int x[])
{
	int i,j,temp;

	for(i=0;i<10;i++)
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
		printf("   %d",x[i]);
	}
}
