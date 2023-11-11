/*=========================
  CLI TASK MANAGER
  VERSION 1.2
  DEVLOPED BY JENIL M DESAI
  DEVLOPED IN C-LANGUAGE
  =========================*/

#include<stdio.h>
#include<conio.h>
#include<process.h>

int ptry=5,task_count=0, comp_task=0;
char tasks[10][100];
int task_status[10];

void creditional();
void homepage();
void list_task();
void add_task();
void edit_task();
void delete_task();
void mark_task();
void main()
{
	int i;
	clrscr();

	printf("\t\t\t     =======================");
	printf("\n\t\t\t     Welcome To Task Manager");
	printf("\n\t\t\t     =======================");

	for(i=0;i>10;i++)
	{
		strcpy(tasks[i], "\0");
	}

	for(i=0;i>10;i++)
	{
		task_status[i]=0;
	}

	creditional();

	getch();
}
void creditional()
{
	int p,opt; //p for password and opt for option of retry and exit.
	char u[20],ru[20]="Jenil";

	if(ptry!=0)
	{
		printf("\n\nEnter Username : ");
		scanf("%s",u);

		printf("\nEnter Password : ");
		scanf("%d",&p);

		if(p==9115 && strcmp(u,ru)==0)
		{
			ptry=5;
			homepage();
		}
		else
		{
			ptry--;
			if(ptry==0)
			{
				printf("\n\n\t\t\t---No Password Trys Remaining---");
				getch();
				exit(0);
			}
			printf("You have %d try remaining!",ptry);
			printf("Retry or Exit [Y-1/N-2] : ");
			scanf("%d",&opt);

			if(opt==1)
			{
				main();
			}
			else
			{
				exit(0);
			}
		}
	}
	else
	{
		exit(0);
	}
}
void homepage()
{
	int option;
	clrscr();

	printf("\t\t\t     =======================");
	printf("\n\t\t\t     Welcome To Task Manager");
	printf("\n\t\t\t     =======================");

	printf("\n\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");
	printf("Total Tasks : %d",task_count);
	printf("\t\t\tRem. Tasks : %d",task_count-comp_task);
	printf("\t\t\tCom. Tasks : %d",comp_task);
	printf("\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");

	printf("\n\n1>. List Task");
	printf("\t\t\t4>. Delete Task");
	printf("\n\n2>. Add Task");
	printf("\t\t\t5>. Mark Task");
	printf("\n\n3>. Edit Task");
	printf("\t\t\t6>. Exit");

	printf("\n\n\nSelect Option : ");
	scanf("%d",&option);

	if(option==1)
	{
		list_task();
	}
	else if(option==2)
	{
		add_task();
	}
	else if(option==3)
	{
		edit_task();
	}
	else if(option==4)
	{
		delete_task();
	}
	else if(option==5)
	{
		mark_task();
	}
	else if(option==6)
	{
		printf("\n\n\t\t\t\t---Thanks For Using---");
		getch();
		exit(0);
	}
	else
	{
		printf("---Invalid Option Selected---");
		getch();
		homepage();
	}
}

void add_task()
{
	int option;
	clrscr();

	printf("\t\t\t     =======================");
	printf("\n\t\t\t     Welcome To Task Manager");
	printf("\n\t\t\t     =======================");

	printf("\n\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");
	printf("Total Tasks : %d",task_count);
	printf("\t\t\tRem. Tasks : %d",task_count-comp_task);
	printf("\t\t\tCom. Tasks : %d",comp_task);
	printf("\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");

	printf("\n\nAdd Task : ");
	flushall();
	gets(tasks[task_count]);
	task_status[task_count]=1;
	task_count++;

	printf("Homepage [1] or Add Task [2] : ");
	scanf("%d",&option);

	if(option==1)
	{
		homepage();
	}
	else if(option==2)
	{
		add_task();
	}
	else
	{
		exit(0);
	}
}

void list_task()
{
	int i,option;
	at:
	clrscr();

	printf("\t\t\t     =======================");
	printf("\n\t\t\t     Welcome To Task Manager");
	printf("\n\t\t\t     =======================");

	printf("\n\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");
	printf("Total Tasks : %d",task_count);
	printf("\t\t\tRem. Tasks : %d",task_count-comp_task);
	printf("\t\t\tCom. Tasks : %d",comp_task);
	printf("\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------\n");

	if(i<5)
	{
		for(i=6;i<task_count;i++)
		{
			printf("\n%d>. %s",i+1,tasks[i]);
			printf("\n");
		}
	}

	if(i>5)
	{
		for(i=0;i<task_count;i++)
		{
			printf("\n%d>. %s",i+1,tasks[i]);
			printf("\n");
			if(i==4)
			{
				break;
			}
		}
	}

	printf("\n\nHomepage [1] or Next [2] : ");
	scanf("%d",&option);

	if(option==1)
	{
		homepage();
	}
	else if(option==2)
	{
		goto at;
	}

}

void edit_task()
{
	int opt,choose_task;
	clrscr();

	printf("\t\t\t     =======================");
	printf("\n\t\t\t     Welcome To Task Manager");
	printf("\n\t\t\t     =======================");

	printf("\n\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");
	printf("Total Tasks : %d",task_count);
	printf("\t\t\tRem. Tasks : %d",task_count-comp_task);
	printf("\t\t\tCom. Tasks : %d",comp_task);
	printf("\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------\n");

	printf("\n\nChoose Task : ");
	scanf("%d",&choose_task);

	choose_task=choose_task-1;

	if(strcmp(tasks[choose_task], "")==0)
	{
		printf("\n\n\t\t\t\t---No Tasks Found---");
		getch();

		printf("\n\nHomepage or Choose Again [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			edit_task();
		}
		else
		{
			edit_task();
		}
	}
	else
	{
		printf("\n\nRewrite the Task : ");
		flushall();
		gets(tasks[choose_task]);

		printf("\n\nHomepage or Edit Again [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			edit_task();
		}
		else
		{
			edit_task();
		}
	}
}

void delete_task()
{
	int choose_task,opt;
	clrscr();

	printf("\t\t\t     =======================");
	printf("\n\t\t\t     Welcome To Task Manager");
	printf("\n\t\t\t     =======================");

	printf("\n\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");
	printf("Total Tasks : %d",task_count);
	printf("\t\t\tRem. Tasks : %d",task_count-comp_task);
	printf("\t\t\tCom. Tasks : %d",comp_task);
	printf("\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------\n");

	printf("\n\nChoose Task : ");
	scanf("%d",&choose_task);

	choose_task=choose_task-1;

	if(strcmp(tasks[choose_task], "")==0)
	{
		printf("\n\n\t\t\t\t---No Tasks Found---");
		getch();

		printf("\n\nHomepage or Delete Again [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			delete_task();
		}
		else
		{
			delete_task();
		}
	}
	else if(strcmp(tasks[choose_task], "")==0)
	{
		strcpy(tasks[choose_task], "\0");
		task_count=task_count-1;

		printf("\n\n\t\t\t---Task Deleted Successfully---");
		getch();

		printf("\n\nDelete Again or Homepage [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			delete_task();
		}
		else if(opt==2)
		{
			homepage();
		}
		else
		{
			delete_task();
		}
	}
}

void mark_task()
{
	int choose_task,opt;
	char done[5]="DONE",mark[20];
	clrscr();

	printf("\t\t\t     =======================");
	printf("\n\t\t\t     Welcome To Task Manager");
	printf("\n\t\t\t     =======================");

	printf("\n\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------");
	printf("Total Tasks : %d",task_count);
	printf("\t\t\tRem. Tasks : %d",task_count-comp_task);
	printf("\t\t\tCom. Tasks : %d",comp_task);
	printf("\n----------------");
	printf("\t\t----------------");
	printf("\t\t----------------\n");

	printf("\n\nChoose Task : ");
	scanf("%d",&choose_task);

	choose_task=choose_task-1;

	if(task_status[choose_task]==0)
	{
		printf("\n\n\t\t\t---No Task Found---");
		getch();

		printf("\n\nHomepag or Choose Again [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			mark_task();
		}
		else
		{
			mark_task();
		}
	}
	else if(task_status[choose_task]==1)
	{
		printf("\nType [DONE] to mark completed : ");
		scanf("%s",mark);

		if(strcmp(mark,done)==0)
		{
			task_status[choose_task]=2;
			strcpy(tasks[choose_task], "");
			comp_task++;
			printf("\n\n\t\t\t---Marked Successfully---");
			getch();
		}
		else
		{
			printf("\n\n\t\t\t---Wrong Type Again---");
			getch();
			mark_task();
		}

		printf("\n\nHomepag or Mark Other [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			mark_task();
		}
		else
		{
			mark_task();
		}
	}
	else if(task_status[choose_task]==2)
	{
		printf("\n\n\t\t\t---Task Already Completed---");
		getch();

		printf("\n\nHomepag or Choose Again [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			mark_task();
		}
		else
		{
			mark_task();
		}
	}
	else
	{
		printf("\n\n\t\t\t---Invalid Choice---");
		getch();

		printf("\n\nHomepag or Choose Again [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			mark_task();
		}
		else
		{
			mark_task();
		}
	}
}