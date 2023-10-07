#include<stdio.h>
#include<conio.h>
int even(int);
void main()
{
	int i,z=0,x;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&x);

		z+=even(x);
	}

	printf("Total of Even : %d",z);

	getch();
}
int even(int x)
{
	if(x%2==0)
	{
		return x;
	}
	else
	{
		return 0;
	}
}