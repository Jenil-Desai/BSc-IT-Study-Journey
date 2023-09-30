#include<stdio.h>
#include<conio.h>
void main()
{
	int x,z=1,i;
	clrscr();

	printf("Enter A Number:");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		z=i*z;
	}
	printf("-----------------------------");
	printf("\nThe Factorial of %d is %d",x,z);
	printf("\n-----------------------------");
	getch();
}