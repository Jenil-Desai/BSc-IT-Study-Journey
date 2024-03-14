#include<stdio.h>
#include<conio.h>
typedef struct xyz node;

struct xyz
{
	node *pre;
	int data;
	node *next;
};

int count=0;
node *first = NULL;
node *temp;
node *last;
node *erase;

void add()
{
	temp = (node*)malloc(sizeof(node));

	printf("\n\tEnter Value : ");
	scanf("%d",&temp->data);

	temp->next=NULL;

	if(first==NULL)
	{
		temp->pre = NULL;
		first  = temp;
	}
	else
	{
		last->next = temp;
		temp->pre = last;
	}

	last = temp;
	count++;
	printf("\n\tOne Value Added...");
}

void disp()
{
	if(first==NULL)
	{
		printf("\n\tNo Record Found...");
	}
	else
	{
		int i=0,ch;

		printf("\n\t[1]. Display From Start");
		printf("\n\t[2]. Display From End");
		printf("\n\n\tEnter Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				temp = first;
				while(temp!=NULL)
				{
					printf("\n(%d). %d",++i,temp->data);
					temp = temp->next;
				}
				break;
			case 2:
				temp = last;
				while(temp!=NULL)
				{
					printf("\n(%d). %d",++i,temp->data);
					temp = temp->pre;
				}
				break;
			default:
				printf("\n\tInvalid Choice..");
		}
	}
}

void srch()
{
	if(first==NULL)
	{
		printf("\n\tNo Record Found...");
	}
	else
	{
		int sv,flag=0,i=0;

		printf("\n\tEnter Search Value : ");
		scanf("%d",&sv);

		temp=first;
		while(temp!=NULL)
		{
			printf("\n(%d). %d",++i,temp->data);
			if(temp->data==sv)
			{
				printf("\t<---Value Found Here---");
				flag=1;
			}
			temp=temp->next;
		}

		if(flag==0)
		{
			printf("\n\tSearch Value Not Found...");
		}
	}
}

void updt()
{
	if(first==NULL)
	{
		printf("\n\tNo Record Found...");
	}
	else
	{
		int uv,flag=0,i=0;

		temp=first;
		while(temp!=NULL)
		{
			printf("\n(%d). %d",++i,temp->data);
			temp=temp->next;
		}

		printf("\n\n\tEnter Update Value : ");
		scanf("%d",&uv);

		temp=first;
		while(temp!=NULL)
		{
			if(temp->data==uv)
			{
				printf("\n\tEnter New Value : ");
				scanf("%d",&temp->data);
				flag=1;
			}
			temp=temp->next;
		}

		if(flag==0)
		{
			printf("\n\tUpdate Value Not Found...");
		}
		else
		{
			printf("\n\tOne Value Updated...");
		}
	}
}

void delv()
{
	int del,flag=0;

	printf("\n\tEnter Delete Value : ");
	scanf("%d",&del);

	if(del==first->data)
	{
		erase=first;
		if(first==last)
		{
			first=NULL;
		}
		else
		{
			first=first->next;
			first->pre=NULL;
		}
		flag=1;
	}
	else
	{
		temp=first;
		while(temp!=NULL)
		{
			if(del==temp->data)
			{
				erase=temp;
				if(erase==last)
				{
					last=last->pre;
					last->next=NULL;
				}
				else
				{
					temp->next->pre=temp->pre;
					temp->pre->next=temp->next;
				}
				flag=1;
			}
			temp=temp->next;
		}
	}

	if(flag==1)
	{
		free(erase);
		count--;
		printf("\n\tOne Value Deleted...");
	}
	else
	{
		printf("\n\t%d Value Not Found...",del);
	}
}

void delp()
{
	int pos,i=0;

	printf("\n\tEnter Delete Position : ");
	scanf("%d",&pos);

	if(pos > count || pos < 1)
	{
		printf("\n\tEnter Position Between 1 To %d",count);
	}
	else
	{
		if(pos==1)
		{
			erase=first;
			if(first==last)
			{
				first=NULL;
			}
			else
			{
				first=first->next;
				first->pre=NULL;
			}
		}
		else if(pos==count)
		{
			erase=last;
			last=last->pre;
			last->next=NULL;
		}
		else
		{
			temp=first;
			while(i<pos-1)
			{
				i++;
				temp=temp->next;
			}
			temp->next->pre=temp->pre;
			temp->pre->next=temp->next;
		}
		free(erase);
		count--;
		printf("\n\tOne Value Deleted...");
	}
}

void sort()
{
	if(first==NULL)
	{
		printf("\n\tNo Record Found...");
	}
	else
	{
		int *z,swap,i=0,j=0;

		z=(int*)calloc(count,sizeof(int));

		temp=first;
		while(temp!=NULL)
		{
			z[i++]=temp->data;
			temp=temp->next;
		}

		for(i=0;i<count;i++)
		{
			for(j=0;j<(count-1)-i;j++)
			{
				if(z[j] > z[j+1])
				{
					swap=z[j];
					z[j]=z[j+1];
					z[j+1]=swap;
				}
			}
		}

		for(i=0;i<count;i++)
		{
			printf("\n(%d). %d",i+1,z[i]);
		}
	}
}

void insrt()
{
	node *ins;
	int pos,i=0;

	printf("\n\tEnter Position : ");
	scanf("%d",&pos);

	if(first==NULL)
	{
		add();
	}
	else if(pos<1)
	{
		printf("\n\tEnter Between 1 To %d",count);
	}
	else if(pos>=count)
	{
		add();
	}
	else
	{
		printf("\n\tEnter Value : ");
		scanf("%d",&ins->data);

		if(pos==1)
		{
			ins->pre=NULL;
			ins->next=first;
			first->pre=ins;
			first=ins;
		}
		else
		{
			temp=first;
			while(i<pos-1)
			{
				i++;
				temp=temp->next;
			}

			ins->pre=temp->pre;
			ins->next=temp;
			temp->pre->next=ins;
			temp->pre=ins;
		}

		printf("\n\tOne Value Inserted...");
	}
}

void main()
{
	int ch;

	while(1)
	{
		clrscr();

		printf("\t\t\t\t======================");
		printf("\n\t\t\t\t::DOUBLE LINKED LIST::");
		printf("\n\t\t\t\t======================");

		printf("\n\n1). Add");
		printf("\n2). Display");
		printf("\n3). Delete");
		printf("\n4). Search");
		printf("\n5). Update");
		printf("\n6). Sort");
		printf("\n7). Count");
		printf("\n8). Insert");
		printf("\n9). Exit");

		printf("\n\n\tEnter Choice : ");
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
				if(first==NULL)
				{
					printf("\n\tNo Record Found...");
				}
				else
				{
					int dch;

					printf("\n\t[1]. Delete By Value");
					printf("\n\t[2]. Delete By Position");

					printf("\n\n\tEnter Choice : ");
					scanf("%d",&dch);

					switch(dch)
					{
						case 1:
							delv();
							break;
						case 2:
							delp();
							break;
						default:
							printf("\n\tInvalid Choice");
					}
				}
				break;
			case 4:
				srch();
				break;
			case 5:
				updt();
				break;
			case 6:
				sort();
				break;
			case 7:
				printf("\n\tTotal Record : %d",count);
				break;
			case 8:
				insrt();
				break;
			case 9:
				exit();
		}

		getch();
	}
}