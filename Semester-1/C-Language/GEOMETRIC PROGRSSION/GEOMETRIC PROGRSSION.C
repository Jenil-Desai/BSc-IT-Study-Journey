#include<stdio.h>
#include<conio.h>
main()
{
	int i,x=1;
	clrscr();

	for(i=1;i<=7;i++)
	{
		printf("%d\t",x);
		x=x*2;
	}
	return 0;
}