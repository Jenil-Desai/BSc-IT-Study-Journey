#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	float f;
	clrscr();

	printf("enter marks of maths:");
	scanf("%d",&a);

	printf("enter marks of english:");
	scanf("%d",&b);

	printf("enter marks of c language:");
	scanf("%d",&c);

	printf("enter marks of computer fundamentals:");
	scanf("%d",&d);

	e=a+b+c+d;
	printf("total marks: %d\n",e);
	f=e/4;

	if(a<33 && b<33 && c<33 && d<33)
	{
		printf("percantage: %.2f",f);
	}
	else if(f>33 && f<55)
	{
		printf("grade: d\n");
		printf("result: pass\n");
	}
	else if(f>55 && f<75)
	{
		printf("grade: c\n");
		printf("result: pass\n");
	}
	else if(f>75 && f<85)
	{
		printf("grade: b\n");
		printf("result: pass\n");
	}
	else if(f>85 && f<100)
	{
		printf("grade: a\n");
		printf("result: pass\n");
	}
	else
	{
		printf("percentage: --\n");
		printf("grade: *\n");
		printf("result: fail\n");
	}
	return 0;
}