#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int y;
	double z=1,x,x1;
	clrscr();

	printf("1).Ceil\n 2).Floor\n 3).Reminder\n 4).Integar Absolute\n 5).Real Absolute\n 6).Power\n");
	printf("\nChoose a Option:");
	scanf("%d",&y);
	printf("========================\n");

	switch(y)
	{
		case 1:
			printf("Enter a Value:");
			scanf("%d",&x);

			z=ceil(x);
			printf("The Ceil of %d is %d",x,z);

			break;

		case 2:
			printf("Enter a Value:");
			scanf("%d",&x);

			z=floor(x);
			printf("The Floor of %d is %d",x,z);

			break;

		case 3:
			printf("Enter a Value:");
			scanf("%d",&x);

			printf("Enter a Modulo:");
			scanf("%d",&x1);

			z=fmod(x,x1);
			printf("The Reminder of %d is %d",x,x1);

			break;
		case 4:
			printf("Enter a Value:");
			scanf("%d",&x);

			z=abs(x);
			printf("The Absolute value of %d is %d",x,z);

			break;
		case 5:
			printf("Enter a Value:");
			scanf("%x",&x);

			z=fabs(x);
			printf("The Absolute value of %d is %d",x,z);

			break;

		case 6:
			printf("Enter a Base:");
			scanf("%d",&x);

			printf("Enter a Expotant:");
			scanf("%d",&x1);

			z=pow(x,x1);
			printf("The Power of %d is %d",x,z);

			break;
	}

	getch();
}