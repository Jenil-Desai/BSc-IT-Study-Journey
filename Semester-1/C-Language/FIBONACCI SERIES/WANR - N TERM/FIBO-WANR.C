#include<stdio.h>
#include<conio.h>
void fibo(int);
void main()
{
	int n;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&n);

	fibo(n);
	getch();
}
void fibo(int n)
{
	int i,x=0,nxt=1,sum=x+nxt;
	for(i=1;i<=n;i++)
	{
		printf("%d ",x);
		x=nxt;
		nxt=sum;
		sum=x+nxt;
	}
}