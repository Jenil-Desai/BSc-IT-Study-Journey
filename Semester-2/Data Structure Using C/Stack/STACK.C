#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],tos=-1;
void add()
{
	if(tos==(size-1))
	{
		printf("\n\n\tStack Ouverflow...");
	}
	else
	{
		tos++;
		printf("\n\nEnter Value : ");
		scanf("%d",&x[tos]);
		printf("\n\n\tValue Added Sucessfully...");
	}
}
void disp()
{
	int i;
	if(tos==-1)
	{
		printf("\n\n\tStack Underflow...");
	}
	else
	{
		for(i=0;i<=tos;i++)
		{
			printf("\n%d",x[i]);
		}
	}
}
void srch()
{
	int sv,flag=0,i;
	if(tos==-1)
	{
		printf("\n\n\tStack Underflow...");
	}
	else
	{
		printf("\n\n\tEnter Search Value : ");
		scanf("%d",&sv);

		for(i=0;i<=tos;i++)
		{
			printf("\n%d",x[i]);
			if(x[i]==sv)
			{
				printf("\t<== Value Found Here");
				flag=1;
			}
		}

		if(flag==0)
		{
			printf("\n\n\tValue %d Not Found In Stack...",sv);
		}
	}
}
void updt()
{
	int uv,flag=0,i;
	if(tos==-1)
	{
		printf("\n\n\tStack Underflow...");
	}
	else
	{
		printf("\n\nEnter Update Value : ");
		scanf("%d",&uv);

		for(i=0;i<=tos;i++)
		{
			if(x[i]==uv)
			{
				printf("\n\nEnter New Value : ");
				scanf("%d",&x[i]);
				flag=1;
			}
		}

		if(flag==0)
		{
			printf("\n\n\tValue %d Not Found In Stack...",uv);
		}
	}
}
void del()
{
	if(tos==-1)
	{
		printf("\n\n\tStack Underflow...");
	}
	else
	{
		printf("\n\n\tValue %d Is Deleted From Stack...",x[tos]);
		tos--;
	}
}
void sort()
{
	int z[size],i,j,temp;

	if(tos==-1)
	{
		printf("\n\n\tStack Underflow...");
	}
	else
	{
		for(i=0;i<=tos;i++)
		{
			z[i]=x[i];
		}

		for(i=0;i<tos;i++)
		{
			for(j=0;j<tos-i;j++)
			{
				if(x[j] > x[j+1])
				{
					temp=x[j];
					x[j]=x[j+1];
					x[j+1]=temp;
				}
			}
		}

		for(i=0;i<tos;j++)
		{
			printf("  %d",z[i]);
		}
	}
}
void main()
{
	int ch;

	while(1)
	{
		clrscr();
		printf("1). Add Data");
		printf("\n2). Display Data");
		printf("\n3). Delete Data");
		printf("\n4). Update Data");
		printf("\n5). Search Data");
		printf("\n6). Sort Data");
		printf("\n7). Count Data");
		printf("\n8). Exit");

		printf("\n\nEnter Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				disp();
				break;
			case 3:
				del();
				break;
			case 4:
				updt();
				break;
			case 5:
				srch();
				break;
			case 6:
				sort();
				break;
			case 7:
				printf("Total Record : %d",tos+1);
				break;
			case 8:
				exit();
			default:
				printf("\n\n\t Invalid Choice...");
					break;
		}

		getch();
	}
}