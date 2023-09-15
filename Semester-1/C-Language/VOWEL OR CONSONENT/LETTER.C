#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();

	printf("enter any letter: ");
	scanf("%c",&a);

	switch(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
	{
		case 1:
		printf("---------------------------\n");
		printf("your following %c is vowels",a);
		printf("\n---------------------------\n");
		break;

		default:
		printf("------------------------------\n");
		printf("your following %c is consonent",a);
		printf("\n------------------------------\n");
	}
	return 0;
}