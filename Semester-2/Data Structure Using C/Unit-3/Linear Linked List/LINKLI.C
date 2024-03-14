#include<stdio.h>
#include<conio.h>

typedef struct info node;

struct info
{
	int data;
	node *next;
};

node *temp;
node *first=NULL;
node *last;
node *erase;

int cnt=0;

void add()
{
	temp = (node *)malloc(sizeof(node));

	printf("\n\tEnter Value : ");
	scanf("%d",&temp->data);

	temp->next=NULL;

	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		last->next=temp;
	}

	last=temp;

	printf("\n\n\tOne Record Added...!!!");
	cnt++;
}

void disp()
{
	if(first==NULL)
	{
		printf("\n\n\tNo Record Found...!!");
	}
	else
	{
		int sr=0;

		temp=first;

		while(temp!=NULL)
		{
			printf("\n\t%d). %d",++sr,temp->data);
			temp=temp->next;
		}
	}
}

void del()
{
	int del,flag=0;
	disp();

	printf("Enter Value For Delete : ");
	scanf("%d",&del);

	temp=first;

	if(temp->data==del)
	{
		erase=first;
		first=first->next;
		flag=1;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->next->data==del)
			{
				erase=temp->next;
				if(erase==last)
				{
					last=temp;
				}
				temp->next=erase->next;
				flag=1;
			}
			temp=temp->next;
		}
	}

	if(flag==0)
	{
		printf("\n\tRecord Not Found...");
	}
	else
	{
		free(erase);
		cnt--;
		printf("\n\n\tOne Record Deleted");
	}
}

void srch()
{
	if(first==NULL)
	{
		printf("\n\tRecord Not Found...");
	}
	else
	{
		int sv,flag=0,sr=0;

		printf("\n\tEnter Search Value : ");
		scanf("%d",&sv);

		temp=first;

		while(temp!=NULL)
		{
			printf("\n%d). %d",++sr,temp->data);
			if(temp->data==sv)
			{
				printf("\t<===Value Found Here");
				flag=1;
			}
			temp=temp->next;
		}

		if(flag==0)
		{
			printf("\n\tValue Not Found...");
		}
	}
}

void delp()
{
	int pos,i=0;

	printf("\n\tEnter Position : ");
	scanf("%d",&pos);

	if(pos>cnt && pos<1)
	{
		printf("\n\n\tEnter Position Between 1 To %d",cnt);
	}
	else
	{
		if(pos==1)
		{
			erase=first;
			first=first->next;
		}
		else
		{
			while(i<pos-1)
			{
				i++;
				temp=temp->next;
			}
			erase=temp->next;

			if(erase==last)
			{
				if(temp==last)
				{
					last=NULL;
				}
				else
				{
					last=temp;
				}
			}

			temp->next=erase->next;
		}
		free(erase);
		cnt--;
		temp=last;
		printf("\n\tOne Value Deleted");
	}
}

void sort()
{
	if(first==NULL)
	{
		printf("\nNo Record Found");
	}
	else
	{
		int *z,i=0,j,swap;
		z = (int*)calloc(cnt,sizeof(int));

		temp=first;
		while(temp!=NULL)
		{
			z[i]=temp->data;
			temp=temp->next;
			i++;
		}

		for(i=0;i<cnt;i++)
		{
			for(j=0;j< (cnt-1) ;j++)
			{
				if(z[j] > z[j+1])
				{
					swap=z[j];
					z[j]=z[j+1];
					z[j+1]=swap;
				}
			}
		}

		for(i=0;i<cnt;i++)
		{
			printf("\n(%d). %d",i+1,z[i]);
		}

		free(z);
	}
}

void updt()
{
	if(first==NULL)
	{
		printf("\n\tNo Record Found");
	}
	else
	{
		int uv,flag=0;

		printf("\n\tEnter Value : ");
		scanf("%d",&uv);
		temp=first;

		while(temp!=NULL)
		{
			if(uv==temp->data)
			{
				printf("\n\tEnter New Value : ");
				scanf("%d",&temp->data);
				flag=1;
			}
			temp=temp->next;
		}

		if(flag==0)
		{
			printf("\n\tValue %d Not Found...",uv);
		}
		else
		{
			printf("\n\tOne Value Updated");
		}
	}
}

void main()
{
	int ch,dc;

	while(1)
	{
		clrscr();

		printf("1). Add Data");
		printf("\n2). Delete Data");
		printf("\n3). Display Data");
		printf("\n4). Search Data");
		printf("\n5). Sort Data");
		printf("\n6). Update Data");
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
				if(first==NULL)
				{
					printf("\n\n\tRecord Not Found...");
				}
				else
				{
					printf("[1]. Delete By Value");
					printf("\n[2]. Delete By Position");
					printf("\n\n\t Enter Choice : ");
					scanf("%d",&dc);

					switch(dc)
					{
						case 1:
							del();
							break;
						case 2:
							delp();
							break;
						default:
							printf("Invalid Choice...");
					}
				}
				break;

			case 3:
				disp();
				break;
			case 4:
				srch();
				break;
			case 5:
				sort();
				break;
			case 6:
				updt();
				break;
			case 7:
				if(first==NULL)
				{
					printf("\n\tTotal Record : 0");
				}
				else
				{
					printf("\n\tTotal Record : %d",cnt);
				}
				break;
			case 8:
				exit();
			default:
				printf("\n\n\tInvalid Choice...");
		}

		getch();
	}
}