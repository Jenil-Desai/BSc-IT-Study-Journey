#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int rn;
		char nm[10];
		float per;
	}data[5],*ptr;
	int i;
	clrscr();

	ptr=data;

	for(i=0;i<5;i++)
	{
		printf("%d). Enter Roll No.   : ",i+1);
		scanf("%d",&data[i].rn);
		printf("%d). Enter Name       : ",i+1);
		scanf("%s",data[i].nm);
		printf("%d). Enter Percentage : ",i+1);
		scanf("%f",&data[i].per);
	}

	for(i=0;i<5;i++)
	{
		printf("\n\nStudent No : %d",i+1);
		printf("\n\tRoll No    : %d",(ptr+i)->rn);
		printf("\n\tName       : %s",(ptr+i)->nm);
		printf("\n\tPercentage : %.2f",(ptr+i)->per);
	}

	getch();
}

void dummy(float *a)
{
	float b=*a;
	dummy (&b);
}