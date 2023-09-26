#include<stdio.h>
#include<conio.h>
void main()
{
	char s[80];
	clrscr();

	printf("enter a name:");
	gets(s);
	printf("==========================\n");
	puts(s);

	getch();
}