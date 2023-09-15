#include<stdio.h>
#include<conio.h>
main()
{
	int rm,x;
	clrscr();

	printf("enter a value:");
	scanf("%d",&x);

	while(x!=0)
	{
		rm=x%10;
		printf("%d",rm);
		x=x/10;
	}
	return 0;
}