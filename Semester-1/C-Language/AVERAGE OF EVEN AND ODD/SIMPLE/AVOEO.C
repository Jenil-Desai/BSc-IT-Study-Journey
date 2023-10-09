#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,z=0,y=0,z1=0;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&x[i]);

		if(x[i]%2==0)
		{
			z=x[i]+z;
			z1++;
		}
		else
		{
			y=x[i]+y;
		}
	}

	printf("\n\nTotal of Even : %d",z/z1);
	printf("\n\nTotal of Odd  : %d",y/(10-z1));

	getch();
}