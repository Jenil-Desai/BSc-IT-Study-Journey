#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,sv,flag=0;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter Value [%d] : ",i+1);
		scanf("%d",&x[i]);
	}
	printf("\n\nEnter Search Value : ");
	scanf("%d",&sv);
	for(i=0;i<10;i++)
	{
		printf("\n%d). %d",i+1,x[i]);
		if(x[i]==sv)
		{
			printf("\t <== Value Found At Position No %d",i+1);
			flag++;
		}
	}
	if(flag==0)
	{
		printf("Value Not Found");
	}
	getch();
}