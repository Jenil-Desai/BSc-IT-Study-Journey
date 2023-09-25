#include<stdio.h> 
#include<conio.h>
main()
{
	int rm,x,c;
	clrscr();

	printf("enter a value:");
	scanf("%d",&x);

	while(x!=0)
	{
		x=x/10;
		c++;
	}
	printf("length of given value: %d",c);
	return 0;
}