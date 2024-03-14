#include<stdio.h>
#include<conio.h>
typedef struct xyz node;

struct xyz
{
	int data;
	node *next;
};

node *first;
node *last = NULL;
node *temp;
node *erase;
int count = 0;


void add()
{
	temp = (node*)malloc(sizeof(node));

	printf("\n\tEnter Value : ");
	scanf("%d",&temp->data);

	temp->next = NULL;

	if(last==NULL)
	{
		first=temp;
	}
	else
	{
		last->next=temp;
		last=temp;
		temp->next=first;
	}
	count++;
	printf("\n\tOne Value Added...");
}

void disp()
{
	if(last==NULL)
	{
		printf("\n\tNo Record Found...");
	}
	else
	{
		int sr=0;
		do
		{
			printf("\n(%d). %d",++sr,temp->data);
			temp=temp->next;
		}while(temp!=last);
	}
}

void srch()
{
	if(last==NULL)
	{
		printf("\n\tNo Record Found...");
	}
	else
	{
		int sv,flag=0,sr=0;

		printf("\n\tEnter Search Value : ");
		scanf("%d",&sv);

		do
		{
			printf("(%d). %d",++sr,temp->data);
			if(temp->data==sv)
			{
				printf("\t<===Value Found Here===");
				flag=1;
			}
			temp=temp->next;
		}while(temp!=last)

		if(flag==0)
		{
			printf("\n\tValue Not Found...");
		}
	}
}