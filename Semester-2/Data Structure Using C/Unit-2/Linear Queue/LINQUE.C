#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],front=-1,rear=-1;

void add()
{
	if(rear==size-1)
	{
		printf("\n\tQueue is Full...");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear++;
		}

		printf("\n\nEnter Value : ");
		scanf("%d",&x[rear]);

		printf("\n\n\tValue Added...");
	}
}

void disp()
{
	int i;

	if(front==-1)
	{
		printf("\n\tQueue is Empty...");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("  %d",x[i]);
		}
	}
}

void srch()
{
	int i,sv,flag=0;

	if(front==-1)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		printf("Enter Search Value : ");
		scanf("%d",&sv);

		for(i=0;i<=rear;i++)
		{
			if(x[i]==sv)
			{
				printf("%d is found",sv);
				flag=1;
			}
		}

		if(flag==0)
		{
			printf("Value %d is not found in queue",sv);
		}
	}
}

void count()
{
	if(front==-1)
	{
		printf("Total Record : 0");
	}
	else
	{
		printf("Total Record : %d",rear+1-front);
	}
}

void del()
{
	if(front==-1)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		printf("Value  %d is removed",x[front]);

		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}

void updt()
{
	int i,uv,flag=0;

	if(front==-1)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		printf("\nEnter Update Value : ");
		scanf("%d",&uv);

		for(i=0;i<=rear;i++)
		{
			if(x[i]==uv)
			{
				printf("\nEnter New Value : ");
				scanf("%d",&x[i]);

				printf("\n\nValue Updated...");
				flag=1;
			}
		}

		if(flag==0)
		{
			printf("\n\n\tValue %d not found in queue...",uv);
		}
	}
}

void sort()
{
	int z[size],i,j=0,temp;

	if(front==-1)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			z[i]=x[i];
		}

		for(i=0;i<=rear+1-front;i++)
		{
			for(j=0;j<rear+1-front-i;j++)
			{
				if(z[j] > z[j+1])
				{
					temp = z[j];
					z[j] = temp;
					z[j+1] = temp;
				}
			}
		}

		for(i=0;i<rear+1-front;i++)
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
		printf("\n3). Search Data");
		printf("\n4). Delete Data");
		printf("\n5). Update Data");
		printf("\n6). Sort Data");
		printf("\n7). count Data");
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
				srch();
				break;
			case 4:
				del();
				break;
			case 5:
				updt();
				break;
			case 6:
				sort();
				break;
			case 7:
				count();
				break;
			case 8:
				exit();
			default:
				printf("\n\n\tInvalid Choice...");
		}
		getch();
	}
}