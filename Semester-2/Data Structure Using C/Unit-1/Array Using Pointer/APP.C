#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],sn,i,*ptr;
	clrscr();
	ptr=x;

	for(i=0;i<10;i++)
	{
		printf("%d). Enter Value : ",i+1);
		scanf("%d",&x[i]);
	}

	printf("Enter Serial Number : ");
	scanf("%d",&sn);

	printf("\n\n\tValue : %d",*(ptr+(sn-1)));

	getch();
}