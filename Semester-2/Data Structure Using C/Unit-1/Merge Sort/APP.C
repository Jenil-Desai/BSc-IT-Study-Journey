#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],y[5],z[10],i,j=0,k=0;
	clrscr();

	printf("Enter Value Of X\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d). Enter Value : ",i+1);
		scanf("%d",&x[i]);
	}
	printf("Enter Value Of Y\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d). Enter Value : ",i+1);
		scanf("%d",&y[i]);
	}

	i=0;

	while(k<10)
	{
		if(x[i] < y[j] && i<5)
		{
			x[k++] = x[i++];
		}
		else if(x[i] > y[j] && j<5)
		{
			z[k++] = y[j++];
		}
		else if(i < 5)
		{
			z[k++] = x[i++];
		}
		else
		{
			z[k++] = y[j++];
		}
	}

	for(i=0;i<10;i++)
	{
		printf("   %d",z[i]);
	}

	getch();
}