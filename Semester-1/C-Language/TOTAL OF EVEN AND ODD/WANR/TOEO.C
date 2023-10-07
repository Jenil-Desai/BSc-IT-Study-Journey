#include<stdio.h>
#include<conio.h>
int even=0,odd=0;
void xyz(int);
void main()
{
	int x,i;
	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("Enter Value : ");
		scanf("%d",&x);
		xyz(x);
	}

	printf("Total of Even : %d",even);
	printf("\nTotal of Odd : %d",odd);

	getch();
}
void xyz(int x)
{
	if(x%2==0)
	{
		even+=x;
	}
	else
	{
		odd+=x;
	}
}
