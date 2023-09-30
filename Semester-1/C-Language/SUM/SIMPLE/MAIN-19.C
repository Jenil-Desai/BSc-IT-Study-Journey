#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i,rm,sum=0;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&x);

	while(x!=0)
	{
		rm=x%10;
		sum=sum+rm;
		x=x/10;
	}

	printf("Total : %d",sum);

	getch();
}