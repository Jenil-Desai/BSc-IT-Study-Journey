#include<stdio.h>
#include<conio.h>
main()
{
	long int a,b,c,d=0;
	clrscr();

	printf("Enter a number:");
	scanf("%ld",&a);
	b=a;
	while(a!=0)
	{
		c=a%10;
		d=(d*10)+c;
		a=a/10;
	}

	if(b==d)
	{
		printf("%d is palindrom number.",b);
	}
	else
	{
		printf("%d is not palindrom number.",b);
	}

	getch();
	return 0;
}
