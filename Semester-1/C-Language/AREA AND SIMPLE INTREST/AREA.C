LED#include<stdio.h>
#include<conio.h>
main()
{
	int a,rd,p,r,n,l,h;
	float x;
	double si;
	clrscr();
	printf("1). area of circle\n");
	printf("2). area of triangle\n");
	printf("3). simple intrest\n");

	printf("enter your choice:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("enter radius of circle:");
		scanf("%d",&rd);
		(float)x=(3.14)*rd*rd;
		printf("area of circle: %.0f",x);
		break;

		case 2:
		printf("beta version\n");
		printf("enter height of triangle:");
		scanf("%d",&l);
		printf("enter base of triangle:");
		scanf("%d",&h);
		printf("area of triangle: %.2f",(0.5)*l*h);
		break;

		case 3:
		printf("enter princple amount:");
		scanf("%d",&p);
		printf("enter rate of intrest:");
		scanf("%d",&r);
		printf("enter duration:");
		scanf("%d",&n);
		si=(double)(p*r*n)/100;
		printf("simple intrest: %",si);
		break;
	}
	return 0;
}