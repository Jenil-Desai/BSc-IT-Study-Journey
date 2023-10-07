#include<stdio.h>
#include<conio.h>
#include<math.h>
int xyz(int,int);
void main()
{
	int total,base,expo;
	clrscr();

	printf("Enter Base : ");
	scanf("%d",&base);

	printf("Enter Expo : ");
	scanf("%d",&expo);

	total=xyz(base,expo);

	printf("\n\tTotal : %d",total);

	getch();
}
int xyz(int base, int expo)
{
	return pow(base,expo);
}