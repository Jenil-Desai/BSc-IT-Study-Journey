#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y,f=0,c=0,rm=0;
	clrscr();

	printf("enter a number:");
	scanf("%d",&x);

	y=x;

	while(x!=0)
	{
		x=x/10;
		c++;
	}

	x=y;

	while(x!=0)
	{
		rm=x%10;
		f=f+pow(rm,c);
		x=x/10;
	}

	if(y==f)
	{
		printf("%d is armstrong number.",y);
	}
	else
	{
		printf("%d is not armstrong number.",y);
	}

	getch();
}