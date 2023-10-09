#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,z=0,y=0;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&x[i]);

		if(x[i]%2==0)
		{
			z=x[i]+z;
		}
		else
		{
			y=x[i]+y;
		}
	}

	printf("Total of Even : %d",z);
	printf("Total of Odd  : %d",y);

	getch();
}