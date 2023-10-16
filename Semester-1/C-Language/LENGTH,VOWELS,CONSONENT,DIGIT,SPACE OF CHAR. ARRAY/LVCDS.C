#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,vowel=0,cons=0,digit=0,space=0,leng=0;
	char x[500];
	clrscr();
	printf("Enter Any Sentence : ");
	gets(x);
	strlwr(x);
	while(x[i]!=NULL)
	{
		leng++;
		i++;
	}
	for(i=0;i<leng;i++)
	{
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
		{
			vowel++;
		}

		if(x[i]!='a'||x[i]!='e'||x[i]!='i'||x[i]!='o'||x[i]!='u')
		{
			cons++;
		}

		if(isdigit(x[i]))
		{
			digit++;
		}

		if(isspace(x[i]))
		{
			space++;
		}
	}
	printf("\n\n=====================");
	printf("\nTotal Length    : %d",leng);
	printf("\nTotal Vowels    : %d",vowel);
	printf("\nTotal Consonent : %d",cons);
	printf("\nTotal Digits    : %d",digit);
	printf("\nTotal Spaces    : %d",space);
	printf("\n=====================");
	getch();
}