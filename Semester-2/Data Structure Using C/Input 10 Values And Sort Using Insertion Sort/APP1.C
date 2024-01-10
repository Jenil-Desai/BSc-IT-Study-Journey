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

	for(i=1;i<10;i++)
	{
		j=i-1;
		temp=x[i];

		while(temp < x[j] && j>=0)
		{
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = temp;
	}

	for(i=0;i<10;i++)
	{
		printf("   %d",x[i]);
	}

	getch();
}