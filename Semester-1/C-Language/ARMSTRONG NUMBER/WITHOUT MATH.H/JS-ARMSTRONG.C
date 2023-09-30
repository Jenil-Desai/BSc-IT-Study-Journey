#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,cnt=0,sum=0,m,rm,i;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&x);

	y=x;

	while(x!=0)
	{
		x=x/10;
		cnt++;
	}

	x=y;

	while(y!=0)
	{
		m=1;
		rm=y%10;

		for(i=1;i<=cnt;i++)
		{
			m=m*rm;
		}

		sum=sum+m;
		y=y/10;
	}

	if(sum==x)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}

	getch();
}