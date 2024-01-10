/*===========================
  GUESSING GAME USING POINTER
  VERSION 1.1
  DEVLOPED IN C-LANGAUGE
  DEVLOPED BY DESAI JENIL M.
  ===========================*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
void welcome();
void main()
{
	int range,numgen,numguess,option;
	int *rangeptr,*numgenptr,*numguessptr,*optionptr;
	clrscr();
	randomize();
	welcome();

	rangeptr = &range;
	numgenptr = &numgen;
	numguessptr = &numguess;
	optionptr = &option;

	printf("\n\nEnter Range : ");
	scanf("%d",rangeptr);

	numgen=random(*rangeptr);

	while(1)
	{
		clrscr();
		welcome();

		printf("\n\nGuess The Number [Exit: -1] : ");
		scanf("%d",numguessptr);

		if(*numguessptr == -1)
		{
			printf("\n\t\t\t---Thanks For Playing---");
			getch();
			exit(0);
		}
		else if(*numguessptr != *numgenptr)
		{
			if(*numguessptr < *numgenptr)
			{
				printf("\n\t\t\t---You Gussed Smaller Number---");
				getch();
			}
			else if(*numguessptr > *numgenptr)
			{
				printf("\n\t\t\t---You Gussed Larger Number---");
				getch();
			}
		}
		else if(*numguessptr == *numgenptr)
		{
			printf("\n\t\t\t---You Gussed Right Number---");
			getch();

			printf("\n\nDo You Want To Play Again ? [Y-1] : ");
			scanf("%d",optionptr);

			if(*optionptr==1)
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