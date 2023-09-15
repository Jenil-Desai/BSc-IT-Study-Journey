#include<stdio.h>
#include<conio.h>
main()
{
	int b=0,c;
	char a;
	clrscr();

	printf("\t\t\tKAUN BANEGA CROREPATI");
	printf("\n\t\t\t---------------------");

	printf("\n\n1. Which company makes Windows OS?");
	printf("\n\nA). Appple");
	printf("\t\tB). Samsung");
	printf("\nC). Microsoft");
	printf("\t\tD). Oneplus");
	printf("\n-------------------------------------------------");
	printf("\nWhich option to lock:");
	scanf("%c",&a);
	printf("-------------------------------------------------");
	if(a=='c')
	{
		b++;
		textcolor(2+128);
		printf("\n");
		cprintf("Your Answer is True");
		printf("\t\t\t\t\tYour Score: %d",b);
		printf("\n-------------------------------------------------");
	}
	else
	{
		b--;
		textcolor(4+128);
		printf("\n");
		cprintf("Your Answer is False");
		printf("\t\t\t\t\tYour Score: %d",b);
		printf("\n-------------------------------------------------");
	}

	printf("\n\n2. Which company makes IOS?");
	printf("\n\nA). Appple");
	printf("\t\tB). Samsung");
	printf("\nC). Microsoft");
	printf("\t\tD). Oneplus");
	printf("\n-------------------------------------------------");
	printf("\nWhich option to lock:");
	scanf(" %c",&a);
	printf("-------------------------------------------------");
	if(a=='a')
	{
		b++;
		textcolor(2+128);
		printf("\n");
		cprintf("Your Answer is True");
		printf("\t\t\t\t\tYour Score: %d",b);
		printf("\n-------------------------------------------------");
	}
	else
	{
		b--;
		textcolor(4+128);
		printf("\n");
		cprintf("Your Answer is False");
		printf("\t\t\t\t\tYour Score: %d",b);
		printf("\n-------------------------------------------------");
	}
	getch();
	return 0;
}