/*==========================
  GUESSING GAME
  VERSION 2.2
  DEVLOPED IN C-LANGUAGE
  DEVLOPED BY DESAI JENIL M.
  ==========================*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
void welcome();
void main()
{
	int range,ranum,gusnum,option;
	clrscr();
	randomize();
	welcome();

	printf("\n\nEnter Range : ");
	scanf("%d",&range);

	ranum = random(range);

	while(1)
	{
		clrscr();
		welcome();

		printf("\n\nGuess The Number [Exit = -1] : ");
		scanf("%d",&gusnum);

		if(gusnum == -1)
		{
			printf("\n\t\t\t---Thanks For Playing---");
			getch();
			exit(0);
		}
		else if(gusnum != ranum)
		{
			if(gusnum < ranum)
			{
				printf("\n\t\t\t---You Gussed Smaller Number---");
				getch();
			}
			else if(gusnum > ranum)
			{
				printf("\n\t\t\t---You Gussed Larger Number---");
				getch();
			}
		}
		else if(gusnum == ranum)
		{
			printf("\n\t\t\t---You Gussed Right Number---");
			getch();

			printf("\n\nDo You Want To Play Again ? [Y-1] : ");
			scanf("%d",&option);

			if(option==1)
			{
				main();
			}
			else
			{
				exit(0);
			}
		}
	}
}

void welcome()
{
	printf("\t\t\t  ========================");
	printf("\n\t\t\t  Welcome To Guessing Game");
	printf("\n\t\t\t  ========================");
}