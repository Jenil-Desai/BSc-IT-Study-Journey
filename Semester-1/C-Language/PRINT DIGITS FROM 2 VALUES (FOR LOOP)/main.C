#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sv,ev,op;
	clrscr();

	printf("Enter Start Value:");
	scanf("%d",&sv);

	printf("==========================\n");

	printf("Enter End Value:");
	scanf("%d",&ev);

	printf("==========================\n");

	printf("1).Simple\n 2).Odd\n 3).Even\n");
	printf("Select an Option:");
	scanf("%d",&op);

	printf("==========================\n");

	switch(op)
	{
		case 1:
			for(i=sv;i<=ev;i++)
			{
				printf("%d\t",i);
			}
			break;

		case 2:
			for(i=sv;i<=ev;i++)
			{
				if(i%2==0)
				{
					printf("%d\t",i);
				}
			}
			break;

		case 3:
			for(i=sv;i<=ev;i++)
			{
				if(i%2==1)
				{
					printf("%d\t",i);
				}
			}
			break;

		default:
			printf("Invalid Selection.");
	}

	getch();
}