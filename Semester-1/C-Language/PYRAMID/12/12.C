#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,p=1;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf(" ");
		}

		for(k=p;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
		p++;
	}
	getch();
}