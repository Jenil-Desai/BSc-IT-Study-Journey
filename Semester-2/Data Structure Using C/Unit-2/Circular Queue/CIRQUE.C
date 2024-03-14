#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],front=-1,rear=-1;

void add()
{
	if((rear+1)%size==front)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}

		if(rear==size-1)
		{
			rear=0;
		}
		else
		{
			rear++;
		}

		printf("\n\nEnter Value : ");
		scanf("%d",&x[rear]);
		printf("\n\n\tValue Inserted...");
	}
}

void disp()
{
	int i;

	if(front==-1)
	{
		printf("\n\nQueue is Empty...");
	}
	else
	{
		if(front <= rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("  %d",x[i]);
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				printf("  %d",x[i]);
			}

			for(i=0;i<=rear;i++)
			{
				printf("  %d",x[i]);
			}
		}
	}
}

void del()
{
	if(front==-1)
	{
		printf("\n\n\tQueue is Emtpy...");
	}
	else
	{
		printf("\n\n\tValue %d is removed...",x[front]);

		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==size-1)
		{
			front=0;
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
		disp();

		printf("\n\nEnter Value For Update : ");
		scanf("%d",&uv);

		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				if(x[i]==uv)
				{
					flag=1;
					break;
				}
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				if(x[i]==uv)
				{
					flag=1;
					break;
				}

				if(flag==0)
				{
					for(i=0;i>=rear;i++)
					{
						if(x[i]==uv)
						{
							flag==1;
							break;
						}
					}
				}
			}

			if(flag==1)
			{
				printf("\n\nEnter New Value : ");
				scanf("%d",&x[i]);

				printf("\n\n\tValue Inserted...");
			}
			else
			{
				printf("\n\n\tValue %d Not Found",uv);
			}
		}
	}
}

void srch()
{
	int sv,flag=0,i;

	if(front==-1)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		printf("Entr Value For Search Value : ");
		scanf("%d",&sv);

		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				if(x[i]==sv)
				{
					flag=1;
					break;
				}
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				if(x[i]==sv)
				{
					flag=1;
					break;
				}
			}

			if(flag==0)
			{
				for(i=0;i<=rear;i++)
				{
					if(x[i]==sv)
					{
						flag=1;
						break;
					}
				}
			}
		}

		if(flag==1)
		{
			printf("\n\n\tValue is Found At Position %d",i+1);
		}
		else
		{
			printf("\n\n\tValue is Not Found...");
		}
	}
}

void sort()
{
	int z[size],i,j,cnt=0,temp;

	if(front==-1)
	{
		printf("\n\n\tQueue is Empty...");
	}
	else
	{
		if(front<=rear)
		{
			j=0;
			for(i=front;i<=rear;i++)
			{
				z[j++]=x[i];
				cnt++;
			}
		}
		else
		{
			j=0;
			for(i=front;i<size;i++)
			{
				z[j++]=x[i];
			}

			for(i=0;i<=rear;i++)
			{
				z[j++]=x[i];
			}
		}

		for(i=0;i<cnt;i++)
		{
			for(j=0;j<(cnt-1)-i;j++)
			{
				if(z[j] > z[j+1])
				{
					temp=z[j];
					z[j]=z[j+1];
					z[j+1]=temp;
				}
			}
		}

		for(i=0;i<cnt;i++)
		{
			printf("\n%d",z[i]);
		}
	}
}

void count()
{
	if(front==-1)
	{
		printf("\n\nTotal Record : 0");
	}
	else
	{
		if(front<=rear)
		{
			printf("\n\nTotal Record : %d",(rear+1)-front);
		}
		else
		{
			printf("\n\nTotal Record : %d",size-front+rear+1);
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
		printf("\n4). Count Data");
		printf("\n5). Sort Data");
		printf("\n6). Search Data");
		printf("\n7). Change Data");
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
				count();
				break;
			case 5:
				sort();
				break;
			case 6:
				srch();
				break;
			case 7:
				updt();
				break;
			case 8:
				exit();
			default:
				printf("\n\n\tInvalid Choice");
		}
		getch();
	}
}