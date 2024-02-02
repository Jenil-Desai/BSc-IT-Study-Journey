#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,sv,first=0,last=9,mid=(first+last)/2,flag=0;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter Value [%d] : ",i+1);
		scanf("%d",&x[i]);
	}
	printf("Enter Search Value : ");
	scanf("%d",&sv);
	while((flag==0) && (first<=last))
	{
		if(sv==x[mid])
		{
			printf("\n\n\tSearch Value Found At Position %d",mid+1);
			flag=1;
		}
		else if(sv>x[mid])
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
		mid=(first+last)/2;
	}
	if(flag==0)
	{
		printf("\n\n\tSearch Value Not Found");
	}
	getch();
}