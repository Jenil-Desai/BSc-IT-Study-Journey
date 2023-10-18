#include<stdio.h>
#include<conio.h>
void main()
{
	int x[9],y[9],i,count=0,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&x[i]);
	}
	for(i=0;i<9;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&y[i]);
	}
	for(i=0;i<24;i++)
	{
		if(count!=3)
		{
			printf("%d  ",x[i]);
			count++;
		}
		if(count==3)
		{
			printf("\t");
			for(j=0;j<3;j++)
			{
				printf("%d  ",y[j]);
				count++;
			}
		}
		if(count==6)
		{
			printf("\t");
			for(j=0;j<3;j++)
			{
				printf("%d  ",x[j]+y[j]);
				count++;
			}
		}
		if(count==9)
		{
			printf("\n");
			for(j=4;j<6;j++)
			{
				printf("%d  ",x[j]);
				count++;
			}
		}
		if(count==12)
		{
			printf("  +    ");
			for(j=4;j<6;j++)
			{
				printf("%d  ",y[j]);
				count++;
			}
		}
		if(count==15)
		{
			printf("  =    ");
			for(j=4;j<6;j++)
			{
				printf("%d  ",x[j]+y[j]);
				count++;
			}
		}
		if(count==18)
		{
			printf("\n");
			for(j=7;j<9;j++)
			{
				printf("%d  ",x[j]);
				count++;
			}
		}
		if(count==21)
		{
			printf("\t");
			for(j=7;j<9;j++)
			{
				printf("%d  ",y[j]);
				count++;
			}
		}
		if(count==24)
		{
			printf("\t");
			for(j=7;j<9;j++)
			{
				printf("%d  ",x[j]+y[j]);
				count++;
			}
		}
	}
	getch();
}
