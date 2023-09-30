#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i,ls=0,gs=0;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("Enter Student Age : ");
		scanf("%d",&x);

		if(x>=21)
		{
			ls++;
		}
		else
		{
			gs++;
		}
	}

	printf("Total Student Less than age 21 : %d",ls);
	printf("\nTotal Student greater than age 21 : %d",gs);

	getch();
}